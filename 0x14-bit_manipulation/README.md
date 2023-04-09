#c - Bit manipulation
This repository contains solutions to tasks related to bit manipulation in C programming language.
##Requirements
All files were written in C using the gcc compiler and tested on Ubuntu 20.04 LTS.
The code should conform to the gcc -Wall -Werror -Wextra -pedantic standard.
##project learing objectives
At the end of this project, you will have gained knowledge and skills to:

* Look for the right source of information without too much help
* Manipulate bits and use bitwise operators
* Write functions that convert binary numbers to unsigned ints and vice versa
* Write functions that print the binary representation of a number
* Write functions that get, set, and clear the value of a bit at a given index
* Write a function that returns the number of bits you would need to flip to get from one number to another
* Understand endianness and write a function to check it
* Crack password-protected programs
#Tasks
##Task 0: Binary to Unsigned int
1. 0-binary_to_uint.c - A function that converts a binary number to an unsigned int.
* Prototype: unsigned int binary_to_uint(const char *b);
##Task 1: Printing Binary Representation of a Number
2. 1-print_binary.c - A function that prints the binary representation of a number.
* Prototype: void print_binary(unsigned long int n);
##Task 2: Getting a Bit
3. 2-get_bit.c - A function that returns the value of a bit at a given index.
* Prototype: int get_bit(unsigned long int n, unsigned int index);
##Task 3: Setting a Bit
4. 3-set_bit.c - A function that sets the value of a bit to 1 at a given index.
* Prototype: int set_bit(unsigned long int *n, unsigned int index);
##Task 4: Clearing a Bit
5. 4-clear_bit.c - A function that sets the value of a bit to 0 at a given index.
* Prototype: int clear_bit(unsigned long int *n, unsigned int index);
##Task 5: Flipping Bits
6. 5-flip_bits.c - A function that returns the number of bits you would need to flip to get from one number to another.
* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
##Task 6: Endianness
All programs and functions should be compiled with gcc using the flags `-Wall -Werror -Wextra -pedantic`. A Makefile is also provided.
##Task 7: Password Cracking
* Crack a password-protected program
* Save the password in the file 101-password without any extra spaces or new lines.
