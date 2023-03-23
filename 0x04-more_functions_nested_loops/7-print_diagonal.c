#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 *
 * @n: Takes input for the function.
*/

void print_diagonal(int n)
{
	int backslash, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (backslash = 1; backslash <= n; backslash++)
		{
			for (space = 1; space <= backslash; space++)
				_putchar(' ');
			_putchar(92); /* 92 is '\' character.*/
			_putchar('\n');
		}
	}
}
