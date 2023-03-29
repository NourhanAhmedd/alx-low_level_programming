#include "main.h"

/**
 * *_strncpy - Function that copies a string.
 *
 * @dest: Takes the first input for the function.
 * @src: Takes the second input for the function.
 * @n: The number of bytes from src.
 *
 * Return: It will Return a pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
