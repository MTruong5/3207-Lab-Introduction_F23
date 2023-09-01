#include "random.h"

// function to get random char
char randchar()
{
	char letter = rand() % 26 + 65;
	return letter;
}
