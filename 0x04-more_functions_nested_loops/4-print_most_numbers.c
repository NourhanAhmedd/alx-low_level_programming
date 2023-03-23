#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: 0 (Success).
*/

void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
		{
			continue;
		}
		_putchar(number + 48);
	}
	_putchar('\n');
}
