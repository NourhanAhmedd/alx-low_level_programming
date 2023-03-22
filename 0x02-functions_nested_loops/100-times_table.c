#include "main.h"

/**
 * print_times_table - Function that prints the n times table, starting with 0.
 *
 * @num: Takes input for the function.
*/

void print_times_table(int num)
{
	int number;
	int multiple;
	int result;

	if (num <= 15 && num >= 0)
	{
		for (number = 0; number <= num; ++number)
		{
			_putchar(48);
			for (multiple = 1; multiple <= num; ++multiple)
			{
				_putchar(',');
				_putchar(' ');

				result = number * multiple;

				if (result <= 9)
				{
					_putchar(' ');
				}
				if (result <= 99)
				{
					_putchar(' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + 48);
				}
				_putchar((result % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
