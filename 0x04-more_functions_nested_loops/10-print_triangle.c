#include "main.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 *
 * @size: Takes input for the function.
*/

void print_triangle(int size)
{
	int r;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				if ((r + c) >= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
