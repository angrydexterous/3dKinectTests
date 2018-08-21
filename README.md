# C++ CMake Emacs Project Template
Base project : https://github.com/cginternals/cmake-init

## Usage
* Recommend using cmake-curses-gui to configure build options
** Enable Examples
** Change compile to debug mode

### Deps
* QT5
* [RTags](https://skebanga.github.io/rtags-with-cmake-in-spacemacs/)

## Emacs
### Config
* Using Spacemacs
* [Setup Reference](https://www.youtube.com/watch?v=OjbkCEkboA8)
* [Sample Config File](https://github.com/angrydexterous/home) 
### Setup Pre-Coding
* mkdir build && cd build
* cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..
### Enable RTags Server
* /usr/local/bin/rdm (new terminal)
* rc -J rc -J ./compile_commands.json

