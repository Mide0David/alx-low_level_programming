# 0x18. C - Dynamic libraries

## Description
This project focuses on dynamic libraries in C. It covers topics such as creating and using dynamic libraries, understanding the differences between static and shared libraries, and using various library-related commands.

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without the help of external resources:
- What is a dynamic library and how does it work
- How to create a dynamic library
- How to use a dynamic library
- Understanding the environment variable $LD_LIBRARY_PATH and its usage
- Differences between static and shared libraries
- Basic usage of commands like `nm`, `ldd`, and `ldconfig`

## Resources
Read or watch:
- [What is the difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
- [Create Dynamic Libraries on Linux](https://www.youtube.com/watch?v=Y6WwzY3SwN0)

## Requirements
### C
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use standard library functions like `printf`, `puts`, etc. except for `_putchar`
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- A `README.md` file, at the root of the project folder, is mandatory and should contain a description of the project and any additional information

### Bash
- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`
- A `README.md` file, at the root of the project folder, is mandatory and should describe what each script does
- All your files must be executable

## Project Tasks
### 0. A library is not a luxury but one of the necessities of life
- Create the dynamic library `libdynamic.so` containing various functions.

### 1. Without libraries, what have we? We have no past and no future
- Create a script `1-create_dynamic_lib.sh` that creates a dynamic library `liball.so` from all the `.c` files in the current directory.

### 2. Let's call C functions from Python
- Create a dynamic library that contains C functions which can be called from Python.

### 3. Code injection: Win the Giga Millions!
- Create a shell script that, when executed, can help you win the Giga Millions jackpot.

## Author
- Mide0David

