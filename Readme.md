# Brainfuck Compiler (to C)
## 1. Introduction

This simple compiler (one kilobyte (which is still heavy for brainfuck)) transforms the brainfuck code that you input intoa human readable (although unsatisfying) .c file, that you can then compile into a program.

## 2. Content
This repo contains four  files : 
- **main.c** is, as the name suggests, the main file containing all the source code of the compiler. Compile this file, and you'll gave a working brainfuck compiler.
- **hello.bf** is an example file, that, when compiled, outputs "hello world!"
- **Makefile** is configured to work with the included files : just typing "make" will compile main.c, run it with hello.bf as an argument, compile the resulting C file, and run it too. make compile simply compiles main.c, and make clean deletes the exectuable, the C output and its executable.

## 3. How to use it
If you want to run your own Brainfuck code, just compile main.c, and execute it using txo arguments : the first is the name of the Brainfuck file code that you want to compile, the second is the name of the C file you want to create.