#include "main.h"

/**
 * *_strcpy - Function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: The first string.
 * @src: The second string.
 *
 * Return: the pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0')

	return (dest);
}
