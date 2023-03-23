#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 *
 * @n: Takes input for the function.
*/

void print_diagonal(int n)
{
	int backslash;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (backslash = 1; backslash <= n; backslash++)
		{
			for (s = 1; s <= backslash; s++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
