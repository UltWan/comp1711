// COMP 1711 Assignment 6
// Ryan Wan, Thursday 8th December 2016


// The struct
struct word_struct
	{
	// Key - how to identify node
	char *name;
	// Data - what is stored in the node
	float amount;
	// Points to the next item
	struct word_struct *nextWord;
	};

// Simplify struct
typedef struct word_struct WordNode;

// Create a node with a predefined name + amount
WordNode *CreateFilledNode(char *word, float count);

// Print a node
void PrintNode(WordNode *wordNode);
