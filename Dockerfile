FROM amd64/ubuntu:20.04

# Use non-interactive mode
ARG DEBIAN_FRONTEND=noninteractive

# Set timezone
ENV TZ=GMT0
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime \
    && echo $TZ > /etc/timezone

# Install all the toolchain dependencies for container
RUN apt-get update && apt-get install -y --no-install-recommends \
    wget build-essential gdb file cmake\
    && apt-get autoremove \
    && rm -rf /var/lib/apt/lists/*

# Install linting tool
RUN apt-get update && apt-get install -y clang-tidy

# Install the toolchain for AARCH64 Linux
RUN apt-get update && apt-get -y install g++-aarch64-linux-gnu

COPY linting-scripts/check_lint.sh /linting-scripts/check_lint.sh

RUN chmod +x /linting-scripts/check_lint.sh