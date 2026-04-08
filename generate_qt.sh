#!/bin/bash
set -euo pipefail

# Directory where this script lives (repository root)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Workspace directory for output, temp files, and databases
WORKSPACE="${1:-${SCRIPT_DIR}/output}"

# Version for the generated crates
VERSION="${2:-0.0.0}"

# Operations to run (default: full pipeline)
OPERATIONS="${3:-main}"

echo "=== Ritual Qt6 Crate Generator ==="
echo "Workspace: ${WORKSPACE}"
echo "Version:   ${VERSION}"
echo "Operations: ${OPERATIONS}"
echo ""

# Auto-detect clang's built-in include path if not already set.
# This is needed so libclang can find stddef.h and other compiler headers.
if [ -z "${CLANG_SYSTEM_INCLUDE_PATH:-}" ]; then
    CLANG_VERSION="$(clang --version | grep -oP 'version \K[0-9]+' | head -1)"
    if [ -d "/usr/lib/clang/${CLANG_VERSION}/include" ]; then
        export CLANG_SYSTEM_INCLUDE_PATH="/usr/lib/clang/${CLANG_VERSION}/include"
    elif [ -d "/usr/lib64/clang/${CLANG_VERSION}/include" ]; then
        export CLANG_SYSTEM_INCLUDE_PATH="/usr/lib64/clang/${CLANG_VERSION}/include"
    else
        echo "WARNING: Could not auto-detect CLANG_SYSTEM_INCLUDE_PATH."
        echo "Set it manually to your clang's built-in include directory."
        echo "Example: export CLANG_SYSTEM_INCLUDE_PATH=/usr/lib/clang/22/include"
    fi
fi

if [ -n "${CLANG_SYSTEM_INCLUDE_PATH:-}" ]; then
    echo "Clang includes: ${CLANG_SYSTEM_INCLUDE_PATH}"
fi

# Detect Qt6 include path
QT_INCLUDE_PATH="$(qmake6 -query QT_INSTALL_HEADERS 2>/dev/null || echo "")"
if [ -z "${QT_INCLUDE_PATH}" ]; then
    echo "ERROR: qmake6 not found or QT_INSTALL_HEADERS not available."
    echo "Install Qt6 development packages."
    exit 1
fi
echo "Qt6 headers:   ${QT_INCLUDE_PATH}"
echo ""

# Build qt_ritual in release mode for speed
echo "Building qt_ritual (release)..."
cargo build --release -p qt_ritual
echo ""

# Check CARGO_TARGET_DIR first (set in Docker), then default location
if [ -n "${CARGO_TARGET_DIR:-}" ] && [ -f "${CARGO_TARGET_DIR}/release/qt_ritual" ]; then
    QT_RITUAL="${CARGO_TARGET_DIR}/release/qt_ritual"
else
    QT_RITUAL="${SCRIPT_DIR}/target/release/qt_ritual"
fi

# Map crate names to Qt6 module header directories.
# Crates are listed in dependency order.
declare -A CRATE_TO_MODULE=(
    [qt_core]=QtCore
    [qt_gui]=QtGui
    [qt_widgets]=QtWidgets
    [qt_ui_tools]=QtUiTools
    [qt_3d_core]=Qt3DCore
    [qt_3d_render]=Qt3DRender
    [qt_3d_input]=Qt3DInput
    [qt_3d_logic]=Qt3DLogic
    [qt_3d_extras]=Qt3DExtras
    [qt_charts]=QtCharts
    [qt_qml]=QtQml
)

# Process order (dependency order)
ORDERED_CRATES=(
    qt_core
    qt_gui
    qt_widgets
    qt_ui_tools
    qt_3d_core
    qt_3d_render
    qt_3d_input
    qt_3d_logic
    qt_3d_extras
    qt_charts
    qt_qml
)

AVAILABLE_CRATES=()
SKIPPED_CRATES=()

for crate in "${ORDERED_CRATES[@]}"; do
    module="${CRATE_TO_MODULE[$crate]}"
    if [ -d "${QT_INCLUDE_PATH}/${module}" ]; then
        AVAILABLE_CRATES+=("$crate")
    else
        SKIPPED_CRATES+=("$crate")
    fi
done

if [ ${#SKIPPED_CRATES[@]} -gt 0 ]; then
    echo "Skipping (headers not found): ${SKIPPED_CRATES[*]}"
fi
echo "Generating: ${AVAILABLE_CRATES[*]}"
echo ""

# Build each available crate in dependency order
for crate in "${AVAILABLE_CRATES[@]}"; do
    echo "--- Generating ${crate} ---"
    "${QT_RITUAL}" "${WORKSPACE}" \
        -c "${crate}" \
        -o ${OPERATIONS} \
        -v "${VERSION}" \
        --local-paths true
    echo ""
done

echo "=== Done ==="
