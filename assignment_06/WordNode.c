// COMP 1711 Assignment 6
// Ryan Wan, Thursday 8th December 2016


// Needed for malloc
#include <stdlib.h>
// Needed for printf
#include <stdio.h>
// Include header file
#include "WordNode.h"


// Create a node with a predefined name + amount by copying parameters
// Calling function is responsible for creating its own strings
WordNode *CreateFilledNode(char *word, float count)
	{
	// Allocate sufficient memory
	WordNode *newNode = (WordNode *) malloc(sizeof(WordNode));
	// Copy values
	newNode->name = strdup(word);
	newNode->amount = count;
	// Set next pointer to NULL
	newNode->nextWord = NULL;
	// Return node
	return newNode;
	}
// Print node
void PrintNode(WordNode *wordNode)
	{
	// Maximum string length is 20 and 10 digits for float
	printf("%20s: %10.0f\n", wordNode->name, wordNode->amount);
	}
