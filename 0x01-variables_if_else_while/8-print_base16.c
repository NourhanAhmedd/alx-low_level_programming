#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int number = 48;

	while (number <= 102)
	{
		putchar(number);

		if (number == 57)
		{
			number += 39;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
