#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Takes input for the function.
 *
 * Return: It will return the length of a string.
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		++length;
	}

	return (length);
}
