#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet in lowercase from a to z.
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
