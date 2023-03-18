#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints all possible different
 * combinations of two digits.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int number1 = 0;
	int number2;

	while (number1 <= 9)
	{
		number2 = 0;
		while (number2 <= 9)
		{
			if (number1 != number2 && number1 < number2)
			{
				putchar(number1 + 48);
				putchar(number2 + 48);

				if (number1 + number2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
