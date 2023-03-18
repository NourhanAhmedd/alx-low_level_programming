#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints all possible combinations of
 * single-digit numbers.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + 48);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
