#include "main.h"

/**
 * main - The Entry Point.
 *
 * Description: By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, write a program that finds and prints
 * the sum of the even-valued terms, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	unsigned long sum;
	float total;
	unsigned long fibonacci1 = 0;
	unsigned long fibonacci2 = 1;

	while (1)
	{
		sum = fibonacci1 + fibonacci2;

		if (sum > 4000000)
		{
			break;
		}
		if ((sum % 2) == 0)
		{
			total = total + sum;
		}
		fibonacci1 = fibonacci2;
		fibonacci2 = sum;
	}
	printf("%.0f\n", total);
	return (0);
}
