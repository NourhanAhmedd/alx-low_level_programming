#include "main.h"

/**
 * *_memcpy - Function that copies memory area.
 *
 * @dest: The second memory area.
 * @src: The first memory area.
 * @n: Number of bytes from memory area.
 *
 * Return: It will return a pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
