#include <stdio.h>

/**
 * SquareRoot - Function that prints the square root.
 *
 * @i: Takes input for the function.
 *
 * Return: It will return the square root.
*/

double SquareRoot(double i)
{
	float sq;
	float t;

	sq  = i / 2;
	t = 0;

	while (sq != t)
	{
		t = sq;
		sq = (i / t + t) / 2;
	}
	return (sq);
}

/**
 * LargestPrimeFactor - Function that prints the largest prime
 * factor of the number.
 *
 * @n: Takes input for the function.
*/

void LargestPrimeFactor(long int n)
{
	int PrimeFactor;
	int LargestNumber;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (PrimeFactor = 3; PrimeFactor <= SquareRoot(n); PrimeFactor += 2)
	{
		while (n % PrimeFactor == 0)
		{
			n = n / PrimeFactor;
			LargestNumber = PrimeFactor;
		}
	}
	if (n > 2)
	{
		LargestNumber = n;
	}
	printf("%d\n", LargestNumber);
}

/**
 * main - The Entry Point.
 *
 * Description: Write a program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	LargestPrimeFactor(612852475143);

	return (0);
}
