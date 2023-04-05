#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 *
 * @s: This is a pointer.
 *
 * Return: It will return length.
*/

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s > '\0')
	{
		length = length + _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
