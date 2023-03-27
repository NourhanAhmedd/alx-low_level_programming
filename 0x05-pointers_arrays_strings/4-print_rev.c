#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: Takes input for the function.
*/

void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	while (length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
