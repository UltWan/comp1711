# COMP 1711 Assignment 6
# Ryan Wan, Thursday 8th December 2016


# Makefile for Assignment 6


# Typing "make" into the terminal, in the folder that the files are contained, will compile files into the executable "wordcount"

# Creates the executable "wordcount" by compiling "WordMain.o" and "WordList.o"
wordcount: WordMain.o WordList.o WordNode.o
	gcc -g -std=c99 -o wordcount WordMain.o WordList.o WordNode.o

# Creates "WordMain.o" by compiling "WordMain.c" and "WordList.h"
WordMain.o: WordMain.c WordList.h
	gcc -g -c -std=c99 -o WordMain.o WordMain.c

# Creates "WordList.o" by compiling "WordList.c" and "WordList.h"
WordList.o: WordList.c WordList.h
	gcc -g -c -std=c99 -o WordList.o WordList.c

# Creates "WordNode.o" by compiling "WordNode.c" and "WordList.h"
WordNode.o: WordNode.c WordNode.h
	gcc -g -c -std=c99 -o WordNode.o WordNode.c

# Deletes all object files
clean:
	rm wordcount *.o
