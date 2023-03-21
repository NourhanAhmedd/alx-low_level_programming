#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet.
*/

void print_alphabet_x10(void)
{
	int row;
	int character;

	for (row = 0; row <= 9; row++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
