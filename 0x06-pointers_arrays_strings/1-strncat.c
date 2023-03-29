#include "main.h"

/**
 * *_strncat - Function that concatenates two strings.
 *
 * @dest: Takes the first input for the function.
 * @src: Takes the second input for the function.
 * @n: The number of bytes from src.
 *
 * Return: It will return a pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int destSize = 0;
	int srcSize;

	while (dest[destSize])
	{
		destSize++;
	}

	for (srcSize = 0; srcSize < n && src[srcSize] != '\0'; srcSize++)
	{
		dest[destSize + srcSize] = src[srcSize];
	}
	dest[destSize + srcSize] = '\0';

	return (dest);
}
