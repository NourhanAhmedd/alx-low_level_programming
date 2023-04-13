#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_memset - Function that prints a constant byte.
 *
 * @s: The string (pointer).
 * @b: A constant byte.
 * @n: The maximum bytes.
 *
 * Return: It will return (ptr).
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
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
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == 0)
		return (NULL);
	_memset(ptr, 0, sizeof(int) * nmemb);

	return (ptr);
}
