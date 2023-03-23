#include "main.h"

/**
 * print_numbers - Function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: 0 (Success).
*/

void print_numbers(void)
{
	int number = 0;

	while (number >= 0 && number <= 9)
	{
		_putchar(number + 48);
		number++;
	}
	_putchar('\n');
}
