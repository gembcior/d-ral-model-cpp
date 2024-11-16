FROM ubuntu:24.04

# Set the locale
ENV LANG="C.UTF-8"
ENV LC_ALL="C.UTF-8"

ARG REQUIRED_PACKAGES=" \
  curl \
  unzip \
  git \
  cmake \
  ninja-build \
  build-essential \
  gcc-multilib \
  g++-multilib \
  clang \
  clang-tidy \
  valgrind \
  gcovr \
  gcc-arm-none-eabi \
  python3 \
  python3-dev \
  python3-diskcache \
  python3-venv \
  cmake-curses-gui \
  cppcheck \
"
ARG RENODE_DEPENDENCIES="dotnet-runtime-8.0"
ARG INSTALL_COMMAND="apt-get -qq install -y"
ARG DEBIAN_FRONTEND=noninteractive

RUN dpkg --add-architecture i386 \
    && apt-get -qq update \
    && $INSTALL_COMMAND $REQUIRED_PACKAGES \
    && $INSTALL_COMMAND $RENODE_DEPENDENCIES \
    && rm -rf /var/lib/apt/lists/*

# Install Renode
RUN curl -sSLo /opt/renode-latest.linux-dotnet.tar.gz \
    https://github.com/renode/renode/releases/download/v1.15.3/renode-1.15.3.linux-dotnet.tar.gz
ENV PYRENODE_PKG="/opt/renode-1.15.3.linux-dotnet.tar.gz"
ENV PYRENODE_RUNTIME="coreclr"
