#include "main.h"

/**
 * main - The Entry Point.
 *
 * Description: Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int count;
	unsigned long fibonacci1 = 0;
	unsigned long fibonacci2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibonacci1 + fibonacci2;
		printf("%lu", sum);

		fibonacci1 = fibonacci2;
		fibonacci2 = sum;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
