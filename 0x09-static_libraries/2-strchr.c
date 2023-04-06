#include "main.h"

/**
 * *_strchr - Function that locates a character in a string.
 *
 * @s: Takes input for the function.
 * @c: The character.
 *
 * Return: It will return a pointer to the first occurrence of the
 * character c in the string s, or null if the character is not found.
*/

char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
