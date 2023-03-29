#include "main.h"

/**
 * *leet - Function that encodes a string into 1337.
 *
 * @character: Takes input for the function.
 *
 * Return: It will return pointer.
*/

char *leet(char *character)
{
	char *pointer = character;
	unsigned int index;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {4, 3, 0, 7, 1};

	while (*character)
	{
		for (index = 0; index < sizeof(letters) / sizeof(char); index++)
		{
			if (*character == letters[index] || *character == letters[index] + 32)
			{
				*character = 48 + numbers[index];
			}
		}
		character++;
	}
	return (pointer);
}
