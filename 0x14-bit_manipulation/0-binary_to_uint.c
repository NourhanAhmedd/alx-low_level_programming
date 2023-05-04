#include "main.h"
/**
 * binary_to_uint - Write a function that converts a binary
 * number to an unsigned int.
 * @b: The pointing to a string of 0 and 1 chars.
 * Return: It will return (v).
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int v;

	v = 0;
	/* If condition: */
	if (!b)
	{
		return (0);
	}

	/* While loop: */
	while (*b)
	{
		/* If condition: */
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		v = v * 2 + (*b++ - '0');
	}

	return (v);
}
