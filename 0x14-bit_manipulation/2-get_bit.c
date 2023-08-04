#include "main.h"
/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: The number (input).
 * @index: The index starting from 0 of the bit you want to get
 * Return: It will return (n >> index & 1) or (-1).
*/
int get_bit(unsigned long int n, unsigned int index)
{
	/* If condition: */
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return (n >> index & 1);
}
