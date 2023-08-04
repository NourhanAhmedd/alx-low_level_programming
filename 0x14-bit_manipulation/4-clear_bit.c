#include "main.h"
/**
 * clear_bit - Write a function that sets the value of a bit
 * to 0 at a given index.
 * @n: The number (input).
 * @index: The index starting from 0 of the bit you want to set.
 * Return: It will return (1) or (-1).
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* If condition: */
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	/* If condition: */
	if (*n & 1L << index)
	{
		*n ^= 1L << index;
	}

	return (1);
}
