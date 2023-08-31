#include "random.h"

char randchar()
{
	char letter = rand() % 26 + 65;
	return letter;
}
