FROM ubuntu:24.04

# Set the locale
ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8

ARG REQUIRED_PACKAGES=" \
  build-essential \
  g++-multilib \
  gcc-multilib \
  libclang-rt-18-dev \
  libnewlib-dev \
  gcc-arm-none-eabi \
  libnewlib-arm-none-eabi \
  libstdc++-arm-none-eabi-dev \
  libstdc++-arm-none-eabi-newlib \
  clang \
  clang-tidy \
  cmake \
  curl \
  git \
  gcovr \
  ninja-build \
  python3 \
  python3-dev \
  python3-venv \
  python3-pip \
  tar \
  wget \
  zip \
  unzip \
"
ARG USER_PACKAGES="cmake-curses-gui cppcheck"
ARG INSTALL_COMMAND="apt-get -qq install -y --no-install-recommends"
ARG DEBIAN_FRONTEND=noninteractive

RUN dpkg --add-architecture i386 \
    && apt-get -qq update \
    && $INSTALL_COMMAND $REQUIRED_PACKAGES \
    && $INSTALL_COMMAND $USER_PACKAGES \
    && rm -rf /var/lib/apt/lists/*
