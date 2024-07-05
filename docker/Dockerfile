FROM ubuntu:20.04
ENV DEBIAN_FRONTEND=noninteractive

#コンテナにsudo権限を持つユーザを作成
ARG DOCKER_UID=1000
ARG DOCKER_USER=docker
ARG DOCKER_PASSWORD=docker
RUN useradd -m -s /bin/bash --uid ${DOCKER_UID} --groups sudo ${DOCKER_USER} \
    && echo ${DOCKER_USER}:${DOCKER_PASSWORD} | chpasswd
USER ${DOKCER_USER}

WORKDIR /work

#コンテナ構築時に実行
RUN apt-get update && \
    apt-get install -y git build-essential cmake clang vim gdb && \
    apt-get autoremove -y && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*
