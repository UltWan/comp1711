// COMP 1711 Assignment 6
// Ryan Wan, Thursday 8th December 2016


// Include for the struct in WordNode
#include "WordNode.h"


// Struct
struct word_list
	{
	// Points to the first node on the list
	WordNode *topNode;
	};

// Simplify struct
typedef struct word_list WordList;

// Initialise an empty list
void InitialiseList(WordList *wordList);

// Displays the number of nodes in the list
int CountNodes(WordList *wordList);

// Print list
void PrintList(WordList *wordList);

// Adds a node to the beginning of the list
void AddNode(WordList *wordList, WordNode *wordNode);

// Uses a key to find a node
int FindByKey(WordList *wordList, char *keyName);
