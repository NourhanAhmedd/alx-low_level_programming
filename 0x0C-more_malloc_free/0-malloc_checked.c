#include "main.h"

/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 *
 * @b: Takes input for the function.
 *
 * Return: It will return (p).
*/

void *malloc_checked(unsigned int b)
{
	int *p;

	*p = malloc(b);
	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
