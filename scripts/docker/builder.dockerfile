FROM ubuntu:24.04 AS ritual_builder
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y build-essential mesa-common-dev libgl1-mesa-dev \
                       cmake curl software-properties-common libssl-dev pkg-config \
                       libsqlite3-dev libclang-dev clang llvm \
                       libxkbcommon-dev libxkbcommon-x11-0 \
                       libfontconfig1-dev libfreetype-dev \
                       libxrender-dev libxcb-xinerama0 libxcb-cursor0 && \
    rm -rf /var/lib/apt/lists/*

# Set libclang path for ritual's bindgen/clang-sys
ENV LIBCLANG_PATH=/usr/lib/llvm-18/lib

COPY rust-toolchain /tmp/rust-toolchain
RUN curl https://sh.rustup.rs -sSf | sh -s -- --default-toolchain $(cat /tmp/rust-toolchain) -y
ENV PATH=/root/.cargo/bin:$PATH
RUN rustup component add rustfmt
ENV RUST_BACKTRACE=1

ENV CARGO_HOME=/build/cargo_home
ENV CARGO_TARGET_DIR=/build/target
ENV RITUAL_WORKSPACE_TARGET_DIR=/build/workspace_target
