#include "main.h"
/**
 * flip_bits - Write a function that returns the num of bits
 * you would need to flip.
 * @n: The first input.
 * @m: The second input.
 * Return: It will return ().
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ct;
	unsigned long int xor_number;

	ct = 0;
	xor_number = n ^ m;
	/* While loop: */
	while (xor_number)
	{
		/* If condition: */
		if (xor_number & 1ul)
		{
			ct++;
		}

		xor_number = xor_number >> 1;
	}

	return (ct);
}
