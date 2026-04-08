FROM ubuntu:24.04 AS common
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && \
    apt-get install -y build-essential mesa-common-dev libgl1-mesa-dev \
                       cmake curl software-properties-common \
                       libsqlite3-dev libclang-dev clang llvm && \
    rm -rf /var/lib/apt/lists/*


FROM common AS builder
RUN apt-get update && \
    apt-get install -y libssl-dev pkg-config && \
    rm -rf /var/lib/apt/lists/* && \
    curl https://sh.rustup.rs -sSf | sh -s -- --default-toolchain stable -y

ENV LIBCLANG_PATH=/usr/lib/llvm-18/lib
ENV PATH=/root/.cargo/bin:$PATH
COPY . /app
WORKDIR /app
RUN cargo build --bin cluster_worker


FROM common AS qt_downloader
RUN apt-get update && \
    apt-get install -y python3 python3-pip pipx && \
    rm -rf /var/lib/apt/lists/*
RUN pipx install aqtinstall && pipx ensurepath
ENV PATH=/root/.local/bin:$PATH
RUN mkdir -p /opt/qt && cd /opt/qt && \
    aqt install-qt linux desktop 6.10.0 linux_gcc_64


FROM common
RUN apt-get update && \
    apt-get install -y libsqlite3-0 && \
    rm -rf /var/lib/apt/lists/*
COPY --from=qt_downloader /opt/qt/6.10.0 /opt/qt/6.10.0
COPY --from=builder /app/target/debug/cluster_worker /root
COPY . /app

ENV PATH=/opt/qt/6.10.0/gcc_64/bin:$PATH
ENV CMAKE_PREFIX_PATH=/opt/qt/6.10.0/gcc_64/lib/cmake

ENV RUST_BACKTRACE=1
ENV QT_RITUAL_WORKER_QUEUE_ADDRESS=amqp://localhost//
ENV QT_RITUAL_WORKER_RUN_TESTS=0
CMD /root/cluster_worker
