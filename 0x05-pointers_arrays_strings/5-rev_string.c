#include "main.h"

/**
 * rev_string - Function that reverses a string.
 *
 * @s: Takes input for the function.
*/

void rev_string(char *s)
{
	int length;
	int temporary;
	int c;

	for (length = 0; s[length] != '\0'; ++length)
		;

	for (c = 0; c < length / 2; c++)
	{
		temporary = s[c];
		s[c] = s[length - 1 - c];
		s[length - 1 - c] = temporary;
	}
}
