// COMP 1711 Assignment 5
// Ryan Wan, Wednesday 22th November 2016


// Include the standard I/O library
#include <stdio.h>
// Include the ctype library
#include <ctype.h>


// Function that prints encrypted and decrypted text
void printDecrypt(int fileSize, char *charBuffer)
{
	// Defines the following integers
	int countFile, countDecrypt=-1, key;
	
	// Loop stops when countFile=fileSize
	for (countFile=0; countFile<fileSize; countFile++)
		{
			// Value of the key will be the same as countFile at this moment
			key = charBuffer[countFile];
			// Increases the counter for countFile and countDecrpt by one
			countFile++; countDecrypt++;

			// Prints the key and progresses countDecrypt by one
			printf("\nKey is: %02d\n", key); countDecrypt++;
			
			// Prints "Encoded:" characters
			printf("Encoded:");

			// Loop for the original characters
			for (; charBuffer[countFile]; countFile++)
			{
				// Prints out characters from file
				printf("%c", charBuffer[countFile]);
			}

			// Prints "Decoded:" in characters
			printf("\nDecoded:");

			// Loop for the decrypted characters
			for (; charBuffer[countDecrypt]; countDecrypt++)
			{
				// Only runs if ASCII values are negative after -(key+65)
				if (charBuffer[countDecrypt]-(key+65)<0)
				{
					// Prints characters after a shift of (-key+26); 26 for the number of letters in the alphabet
					printf("%c", charBuffer[countDecrypt]-key+26);
				}
				// Runs for rest of the ASCII values if they are zero or positive
				else
				{
					// Prints the characters minus the value of the key
					printf("%c", charBuffer[countDecrypt]-key);
				}
			}
			// Print a new line after decrypting all the messages
			printf("\n");
		}
}
