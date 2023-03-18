#include <stdio.h>
#include <stdllb.h>
#include <time.h>

/**
 * main - The Entry Poinr.
 *
 * Description: This program will assign a number to n each time it is executed
 * and print whether the number in the variable n is positive or negative.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
