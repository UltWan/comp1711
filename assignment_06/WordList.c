// COMP 1711 Assignment 6
// Ryan Wan, Thursday 8th December 2016


// Needed for strcmp
#include <string.h>
// Needed for printing
#include <stdio.h>
// Include the header file for this c file
#include "WordList.h"


// Function to initialise an empty list
void InitialiseList(WordList *wordList)
	{
	// Sets the node pointer to empty
	wordList->topNode = NULL;
	}

// Function to display the number of nodes in the list
int CountNodes(WordList *wordList)
	{
	// Integer to count nodes
	int nNodes = 0;
	// Node to go down the list
	WordNode *walkNode;
	// Loop contains three statements
		// Goes to the first node
	for (	walkNode = wordList->topNode;
		// Stop when there is a NULL
		walkNode != NULL;
		// Going to the next pointer increments
		walkNode = walkNode->nextWord	)
		{
		// Body of for loop 
		nNodes++;
		}
	// Return the total number of nodes in the list
	return nNodes;
	}

// Function to print the list
void PrintList(WordList *wordList)
	{
	// Node to go down the list
	WordNode *walkNode = wordList->topNode;
	// Print the number of words in the list
	printf("List is size: %d\n", CountNodes(wordList));
	printf("===============================================\n");
	// Prints "Word" and "Number" column
	printf("                Word:       Number:             \n\n");
	// Loop for empty initialisation
	for (; walkNode != NULL; walkNode = walkNode->nextWord)
		{
		// Body of loop
		PrintNode(walkNode);
		}
	printf("===============================================\n\n");
	}

// Function to add node to the top of the list
void AddNode(WordList *wordList, WordNode *wordNode)
	{
	// Add existing list to bottom of new one
	wordNode->nextWord = wordList->topNode;
	// Set the list to point to the new one
	wordList->topNode = wordNode;
	}

// Function to find a specific node in the list with a key
int FindByKey(WordList *wordList, char *keyName)
	{
	// Pointer that finds the node
	WordNode *keyNode = wordList->topNode;
	// While loop finds key
	while (keyNode != NULL)
		{
		// Compare string names and keys
		if (strcmp(keyNode->name, keyName) == 0)
			{
			// Pointer from keyNode to amount that increments
			keyNode->amount++;
			// Found key
			return keyNode;
			}
		// Go to next node
		keyNode = keyNode->nextWord;
		}
	// Returns because keyNode is NULL
	return keyNode;
	}
