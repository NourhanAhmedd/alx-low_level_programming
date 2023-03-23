#include "main.h"

/**
 * print_number - Function that prints an integer.
 *
 * @n: Takes input for the function.
*/

void print_number(int n)
{
	unsigned int number;

	number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + 48);
}
