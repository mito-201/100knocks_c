FROM mcr.microsoft.com/vscode/devcontainers/cpp:ubuntu-21.04

RUN apt install -y tzdata
ENV TZ=Asia/Tokyo

# 開発環境のシステムインストール
# RUN apt install -y clang-format
