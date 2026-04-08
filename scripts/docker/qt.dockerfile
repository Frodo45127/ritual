FROM ubuntu:24.04 AS qt_downloader
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y python3 python3-pip pipx && \
    rm -rf /var/lib/apt/lists/*

# Install aqtinstall for downloading Qt
RUN pipx install aqtinstall && pipx ensurepath
ENV PATH=/root/.local/bin:$PATH

# Download Qt 6.10.0 for linux desktop (gcc_64)
RUN mkdir -p /opt/qt && cd /opt/qt && \
    aqt install-qt linux desktop 6.10.0 linux_gcc_64 \
        -m qtcharts qt3d qtquick3d qtshadertools

FROM ritual_builder
COPY --from=qt_downloader /opt/qt/6.10.0 /opt/qt/6.10.0

# Set Qt6 environment so qmake6 is in PATH
ENV PATH=/opt/qt/6.10.0/gcc_64/bin:$PATH
ENV LD_LIBRARY_PATH=/opt/qt/6.10.0/gcc_64/lib:$LD_LIBRARY_PATH
ENV QT_QPA_PLATFORM_PLUGIN_PATH=/opt/qt/6.10.0/gcc_64/plugins
ENV CMAKE_PREFIX_PATH=/opt/qt/6.10.0/gcc_64/lib/cmake

RUN apt-get update && \
    apt-get install -y libxrender1 libfontconfig1 libxkbcommon-x11-0 \
                       mesa-common-dev xvfb libxcb-cursor0 && \
    rm -rf /var/lib/apt/lists/*

RUN mkdir /tmp/run && chmod 0700 /tmp/run
ENV XDG_RUNTIME_DIR=/tmp/run
