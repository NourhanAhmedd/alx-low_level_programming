#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 *
 * @n: Takes input for the function.
*/

void print_diagonal(int n)
{
	int backslash = 0;
	int s;

	while (backslash < n && n > 0)
	{
		s = 0;
		while (s < backslash)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		backslash++;
	}
	if (backslash == 0)
	{
		_putchar('\n');
	}
}
