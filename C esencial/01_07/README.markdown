# README

## Comandos para instalar GCC y LLVM en Linux y OS X

### Fedora, CentOS y otros

    yum install yum-utils make automake gcc gcc-c++ kernel-devel
    yum install llvm clang

### Devian, Ubuntu, Luna OS y otros
    sudo apt-get install build-essential
    sudp apt-get install clang

### Mac OS X
Instalar Xcode desde el Mac App Store e instalar "command line tools" o ejecutar 

    xcode-select --install

Instalar Homebrew desde http://brew.sh

    brew install gcc
