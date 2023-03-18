#include <stdio.h>

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int firstnumber = 0;
	int secondnumber;

	while (firstnumber <= 99)
	{
		secondnumber = firstnumber;
		while (secondnumber <= 99)
		{
			if (secondnumber != firstnumber)
			{
				putchar((firstnumber / 10) + 48);
				putchar((firstnumber % 10) + 48);
				putchar(' ');
				putchar((secondnumber / 10) + 48);
				putchar((secondnumber % 10) + 48);

				if (firstnumber != 98 || secondnumber != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondnumber++;
		}
		firstnumber++;
	}
	putchar('\n');
	return (0);
}
