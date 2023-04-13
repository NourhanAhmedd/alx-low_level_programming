#include "main.h"

/**
 * *_m - Function that prints a constant byte.
 *
 * @str: The string (pointer).
 * @c: A constant byte.
 * @num: The maximum bytes.
 *
 * Return: It will return (p).
*/

char *_m(char *str, char c, unsigned int num)
{
	int *p = str;

	while (num--)
	{
		*str++ = c;
	}
	return (p);
}

/**
 * *_calloc - Write a function that allocates memory for
 * an array, using malloc.
 *
 * @nmemb: An array of elements.
 * @size: The size of elements.
 *
 * Return: It will return (ptr).
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
	{
		return (NULL);
	}
	_m(ptr, 0, sizeof(int) * nmemb);

	return (ptr);
}
