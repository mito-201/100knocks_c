FROM mcr.microsoft.com/vscode/devcontainers/cpp:ubuntu-22.04

RUN apt update \
    && apt install -y tzdata \
    && apt install -y libgtk-3-dev

ENV TZ=Asia/Tokyo
