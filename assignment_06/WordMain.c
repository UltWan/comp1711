// COMP 1711 Assignment 6
// Ryan Wan, Thursday 8th December 2016


// Include standard IO for EOF
#include <stdio.h>
// Include string for strlen and memset
#include <string.h>
// Include ctype for isalpha and tolower
#include <ctype.h>
// Includes header file "WordList.h"
#include "WordList.h"


// All of the integers used
int countA = 0, countB=1, characterNum;
// input takes the user input or text file input
// wordstore temporarily stores an individual word, limited to 200 characters
char input, wordstore[200];

// Main routine
int main(int argc, char* argv[])
{
	// Structure of Wordlist
	WordList myList;
	// Initialise list
	InitialiseList(&myList);
	// Loop to read input
	for (countA=0; countA<countB; countA++)
	{
		// While loop until reaches end of file or Ctrl+D for user input
		while ((input = getchar())!= EOF)
		{
			// Checks for alphabetical characters, if not then adds one to the counter and breaks
			if (isalpha (input) == 0)
			{
				countB++;
				break;
			}
			// Input is stored in wordstore
			wordstore[characterNum] = tolower(input);
			// Increments
			characterNum++;
		}
		// Checks if there is already a node for the word being stored
		if (FindByKey(&myList, wordstore) != 0)
		{
			// If there is, then adds one to the counter
			characterNum++;
		}
		// If not then:
		else
		{
			// Checks if it is a word and not non-alphabetical characters
			if (strlen(wordstore) > 0)
			{
				// Adds new node if it is a new word
				AddNode(&myList, CreateFilledNode(wordstore, 1));
			}
		}
		// Clears the memory in word store
		memset(wordstore, 0, strlen(wordstore));
		// Resets the counter to 0
		characterNum = 0;
	}
	// Print the list for all nodes
	PrintList(&myList);
	// Return successfully
	return 0;
}
