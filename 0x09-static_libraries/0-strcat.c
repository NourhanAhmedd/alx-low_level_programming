#include "main.h"

/**
 * *_strcat - Function that concatenates two strings.
 *
 * @dest: Takes the first input for the function.
 * @src: Takes the second input for the function.
 *
 * Return: It will return a pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int destSize = 0;
	int srcSize;

	while (dest[destSize])
	{
		destSize++;
	}

	for (srcSize = 0; src[srcSize]; srcSize++)
	{
		dest[destSize++] = src[srcSize];
	}
	return (dest);
}
