#include "main.h"

/**
 * print_square - Function that prints a square, followed by a new line.
 *
 * @size: Takes input for the function.
*/

void print_square(int size)
{
	int square = 0;
	int s;

	while (square < size && size > 0)
	{
		s = 0;
		while (s < size)
		{
			_putchar('#');
			s++;
		}
		_putchar('\n');
		square++;
	}
	if (square == 0)
	{
		_putchar('\n');
	}
}
