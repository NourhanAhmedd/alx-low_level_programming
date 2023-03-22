#include "main.h"

/**
 * LengthOfNumber - Function that prints the length of the number.
 *
 * @number: Takes input for the function.
 *
 * Return: Len (Length of the number).
*/

int LengthOfNumber(int number)
{
	int Len = 0;

	if (!number)
	{
		return (1);
	}

	while (number)
	{
		number = number / 10;
		Len = Len + 1;
	}
	return (Len);
}

/**
 * main - The Entry Point.
 *
 * Description: Write a program that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success).
*/

int main(void)
{
	int count;
	int InitialZeros;
	unsigned long fibonacci1 = 1;
	unsigned long fibonacci2 = 2;
	unsigned long sum;
	unsigned long max = 100000000;
	unsigned long fibonacci1_o = 0;
	unsigned long fibonacci2_o = 0;
	unsigned long sum_o = 0;

	for (count = 1; count <= 98; count++)
	{
		if (fibonacci1_o > 0)
		{
			printf("%lu", fibonacci1_o);
		}
		InitialZeros = LengthOfNumber(max) - 1 - LengthOfNumber(fibonacci1);

		while (fibonacci1_o > 0 && InitialZeros > 0)
		{
			printf("%d", 0);
			InitialZeros--;
		}
		printf("%lu", fibonacci1);

		sum = (fibonacci1 + fibonacci2) % max;
		sum_o = fibonacci1_o + fibonacci2_o + (fibonacci1 + fibonacci2) / max;
		fibonacci1 = fibonacci2;
		fibonacci1_o = fibonacci2_o;
		fibonacci2 = sum;
		fibonacci2_o = sum_o;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
