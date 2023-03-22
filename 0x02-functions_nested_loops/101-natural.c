#include "main.h"

/**
 * main - The Entry Point.
 *
 * Description: Write a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int number;
	int sum;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
		{
			sum = sum + number;
		}
	}
	printf("%d\n", sum);
	return (0);
}
