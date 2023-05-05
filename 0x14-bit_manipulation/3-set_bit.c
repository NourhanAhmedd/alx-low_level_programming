#include "main.h"
/**
 * set_bit - Write a function that sets the value of a bit
 * to 1 at a given index.
 * @n: The number (input).
 * @index: The index starting from 0 of the bit you want to set.
 * Return: It will return (!!(*n |= 1L << index)) or (-1).
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/* If condition: */
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return (!!(*n |= 1L << index));
}
