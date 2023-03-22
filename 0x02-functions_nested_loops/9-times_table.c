#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int number;
	int multiple;
	int result;

	for (number = 0; number <= 9; number++)
	{
		_putchar(48);
		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			result = number * multiple;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + 48);
			}
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
