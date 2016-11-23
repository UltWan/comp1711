// COMP 1711 Assignment 5
// Ryan Wan, Wednesday 22th November 2016


// Include the standard I/O library
#include <stdio.h>
// Include standard I/O library
#include <stdlib.h>
// Include print.h file
#include "decrypt.h"


//Main part of the file
int main(int argc, char *argv[])
{
	// Cheack for correct number of arguments If the number of arguments is incorrect, then issues error message and returns
	if (argc!=2)
		{
		// If the number of arguments is incorrect, then issues error message and returns
		printf("Incorrect number of command line parameters\n");
		return 0;
		}

	// Points to the file
	FILE *aFile = fopen(argv[1], "rb");

	// Checks to make sure it worked
	if (aFile == NULL)
		{
		// If there is no file to be read, then issues an error message and returns
		printf("Couldn't open file\n");
		return 0;
		}

	// Go to the end of the file
	fseek(aFile, 0, SEEK_END);

	// Find the file size
	long fileSize = ftell(aFile);

	// Rewind file to the start
	rewind(aFile);

	// Allocate enough memory for the characters
	char *charBuffer = (char *) malloc(fileSize);

	// Read in the characters from the disk
	// To void * the buffer must be cast
	long nRead = fread((void *) charBuffer, 1, fileSize, aFile);

	// Checks the right number has been read
	if (nRead != fileSize)
		{
		// If the numbers do not match, an error message is issued and returns
		printf("Couldn't read file\n");
		return 0;
		}
	else
		{
		// Displays the file name as string
		printf("File name: %s\n", argv[1]);
		}

	// Fetches the "printCharacter" function from "print.c"
	printCharacter(fileSize, charBuffer);
	
	// Fetches the "printDecrypt" function from "decrypt.c"
	printDecrypt(fileSize, charBuffer);
	
	// Return successfully
	return 0;
}
