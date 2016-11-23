// COMP 1711 Assignment 5
// Ryan Wan, Wednesday 22th November 2016

Assignment README 5

Notes: 

-This program is designed to decode text files that are encrypted with Caesar's cipher.

-This is done by reading in the entire file in binary and displaying the decrypted contents of the file in upper case characters.

-Work is split between the "main.c", "print.c" and "decrypt.c" files; they can be opened and viewed in any text editor.

-The other file that is needed to run the program is the "decrypt.h" file, however the makefile will automatically handle these file in the compilation process as long as they are in the same folder.

Instructions:

-In order to run the file it must first be complied, which is done with the makefile. To do this on Linux, go to the directory containing the makefile, main.c, print.c, decrypt.c and print.h files, then enter the following command into the terminal:
	./make
The compilation is successful if it reports that the makefile is up to date or it has been complied, and therefore updated.

-Then execute the file with the following command:
	./decrypt xxxx
(xxxx being the name of the file that is to be read in)
