#include "main.h"
#include <stdlib.h>

/**
 * *_mset - Function that prints a constant byte.
 *
 * @str: The string (pointer).
 * @c: A constant byte.
 * @num: The maximum bytes.
 *
 * Return: It will return (str).
*/

char *_mset(char *str, char c, unsigned int num)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		str[index] = c;
	}
	return (str);
}

/**
 * *_calloc - Write a function that allocates memory for
 * an array, using malloc.
 *
 * @nmemb: An array of elements.
 * @size: The size of elements.
 *
 * Return: It will return (p).
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	_mset(p, 0, nmemb * size);

	return (p);
}
