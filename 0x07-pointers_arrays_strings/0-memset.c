#include "main.h"

/**
 * *_memset - Function that fills memory with a constant byte.
 *
 * @s: Takes input for the function.
 * @b: Constant byte.
 * @n: Bytes of the memory area.
 *
 * Return: It will return a pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++, n--)
	{
		s[index] = b;
	}
	return (s);
}
