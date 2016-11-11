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
	// Overall counter for the for loop
	for (count=0; count<nBytes; count++)
	{
		// Prints out a new line and counter, after 16 hexadecimals
		if (count % 16 == 0)
		{
			printf("\n");
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
	// Overall counter for the loop. Divided by two because of typecast
	for (count=0; count<nBytes/2; count++)
	{
		// New line and counter after 8 decimals. Multiple by two for the to count normally
		if (count % 8 == 0)
		{
			printf("\n");
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
	for (count; count<nBytes/7; count++)
	{
		// Loop for counter and hexidecimal
		for (count1=0; count1<8; count1++)
		{
			// New counter after 8 hexidecimals
			if (count1 % 8 == 0)
			{
				printf("%06x  ", count2);
			}
			// Prints 8 hexidecimals per line
			if (count2<nBytes)
			{
				printf("%02x ", data[count2]);
				count2++;
			}
			// Prints spaces
			else 
			{
				printf(" ");
				count2++;
			}
		}
		// Prints "|"
		printf("|");
		// Loop for characters
		for (count1=0; count1<8; count1++)
		{
			// Checks all characters are printable
			if isprint(data[count3])
			{
				// Prints printable characters from data
				printf("%c", data[count3]);
				count3++;
			}
			else 
			{
				// All other characters are displayed as "."
				printf(".");
				count3++;
			}
		}
		// Prints "|"
		printf("|");
		// New line
		printf("\n");
	}
}			
