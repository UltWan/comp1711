// COMP 1711 Assignment 5
// Ryan Wan, Wednesday 22nd November 2016


// Include the standard I/O library
#include <stdio.h>
// Include the ctype library
#include <ctype.h>


// Declare counters as integers; these are needed to count the number of characters in the text files
int count, count1, count2;

void printCharacter(int fileSize, char *charBuffer)
{
	// Assign count1 the value of 0
	count1=0;
	// New line
	printf("\n");
	// Main loop
	do
	{
		// Loop to count and print counter and hexadecimals
		for (count=0; count<8; count++)
		{
			if (count % 8 == 0)
			{
				// Print counter
				printf("%06x ", count1);
			}
			// Print hexidecimals and add to counter
			printf("%02x ", charBuffer[count1-1]); count1++;
		}
		// Print "|"
		printf("|");
		//Loop to count and print characters
		for (count=0; count<8; count++)
		{
			// Check if character is printable
			if isprint(charBuffer[count2])
			{
				// Print if printable
				printf("%c", charBuffer[count2]);
				// Add one to counter
				count2++;
			}
			// If character is not printable, then print "."
			else 
			{
			printf(".");
			count2++;
			}
		}
		// Print "|" and new line
		printf("|\n");
	}
	while (count1<(fileSize));
	// End of main loop
}
// End of program
