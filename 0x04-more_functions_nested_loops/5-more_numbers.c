#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: 0 (Success).
*/

void more_numbers(void)
{
	int number;
	int line;
	int n;

	for (line = 1; line <= 10; line++)
	{
		for (number = 0; number <= 14; number++)
		{
			n = number;
			if (number > 9)
			{
				_putchar(1 + 48);
				n = number % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
