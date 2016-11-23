// COMP 1711 Assignment 3
// Ryan Wan, Wednesday 10th November 2016
//
// This unit has three similar routines for printing out data
//
// hexdump xxxx:		Standard hexadecimal output (16 columns)
// hexdump -c xxxx:		Single character output (16 columns)
// hexdump -d xxxx:		Two byte integer output	(8 columns)

// Include the standard I/O library
#include <stdio.h>
// Include the ctype library
#include <ctype.h>

// Declare counters as integers; these are needed to count the number of characters in the text files
int count, count1, count2, count3;

// Routine to print out in hexadecimal format
void printHexadecimal(int nBytes, unsigned char *data)
{
	// Overall counter for the for loop, minus null
	for (count=0; count<nBytes; count++)
	{
		// Prints out a new line and counter, after 16 hexadecimals
		if (count % 16 == 0)
		{
			// Prints new line
			printf("\n");
			// Prints counter
			printf("%06x ", count);
		}
		// Prints out a space after 8 characters
		if (count % 8 == 0)
		{
			printf(" ");
		}
		// Prints out hexadecimals using pointer to data
		printf("%02x ", *data);
		++data;
	}
	// New line after all characters have been converted
	printf("\n");
}
// Routine to print out in decimal format
void printDecimal(int nBytes, unsigned char *data)
{
	// Converts unsigned char to unsigned short
	unsigned short *decimal = (unsigned short*) data;
	// Overall counter for the loop. Minus null, divided by two because of typecast.
	for (count=0; count<(nBytes)/2; count++)
	{
		// New line and counter after 8 decimals. Multiple by two for the to count normally
		if (count % 8 == 0)
		{
			// Print new line
			printf("\n");
			// Prints counter
			printf("%06x  ", count*2);
		}
		// Prints out decimals according to data
		printf("%05d ", decimal[count]);
	}
	// New line after all data has been converted
	printf("\n");
}
// Routine to print out in character format
void printCharacter(int nBytes, unsigned char *data)
{
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
			printf("%02x ", data[count1-1], count1++);
		}
		// Print "|"
		printf("|");
		//Loop to count and print characters
		for (count=0; count<8; count++)
		{
			// Check if character is printable
			if isprint(data[count2])
			{
				// Print if printable
				printf("%c", data[count2]);
				// Add one to counter
				count2++;
			}
			else if (data[count2]==0)
			{
			printf(" ");
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
	while (count1<(nBytes));
	// End of main loop
}
// End of program
