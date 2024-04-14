FROM ubuntu:latest

# Setze die Umgebungsvariable DEBIAN_FRONTEND auf noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Update package lists and upgrade packages
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y \
    build-essential \
    software-properties-common \
    git \
    tzdata

# Install specific versions of GCC
RUN apt-get install -y \
    gcc-12 \
    g++-12 \
    gcc-11 \
    g++-11

# Set up alternatives for GCC and G++
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 60 \
    --slave /usr/bin/g++ g++ /usr/bin/g++-12 && \
    update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-11 50 \
    --slave /usr/bin/g++ g++ /usr/bin/g++-11

# Clean up
RUN apt-get autoremove -y && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# Set the default command to bash
CMD ["bash"]
