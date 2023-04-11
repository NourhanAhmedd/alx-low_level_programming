#include "main.h"

/**
 * *create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The array size.
 * @c: Takes input for the function.
 *
 * Return: It will return (p).
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
	{
		return (0);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
