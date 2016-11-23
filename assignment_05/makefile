# COMP 1711 Assignment 5
# Ryan Wan, Wednesday 22th November 2016


# Makefile for assignment 5 coursework


# Typing "make" into the terminal, in the folder that the files are contained, will compile files into the executable "main"

# Creates the executable "main" by compiling "main.o" and "print.o"
decrypt: main.o print.o decrypt.o
	gcc -g -std=c99 -o decrypt main.o print.o decrypt.o -Wall

# Creates "main.o" by compiling "main.c" and "print.h"
main.o: main.c decrypt.h
	gcc -g -c -std=c99 -o main.o main.c -Wall

# Creates "print.o" by compiling "print.c" and "print.h"
print.o: print.c decrypt.h
	gcc -g -c -std=c99 -o print.o print.c -Wall

# Creates "decrypt.o" by compiling "decrypt.c" and "print.h"
decrypt.o: decrypt.c decrypt.h
	gcc -g -c -std=c99 -o decrypt.o decrypt.c -Wall

# Deletes all object files
clean:
	rm decrypt *.o -Wall
