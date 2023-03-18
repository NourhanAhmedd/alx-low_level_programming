#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The Entry Point.
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
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
