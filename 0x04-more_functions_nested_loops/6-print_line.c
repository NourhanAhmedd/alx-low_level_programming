#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 *
 * @n: Takes input for the function.
*/

void print_line(int n)
{
	int underscore;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (underscore = 1; underscore <= n; underscore++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
