#include "main.h"

/**
 * *_strpbrk - Function that searches a string for any of a set of bytes.
 *
 * @s: The first string.
 * @accept: The second string.
 *
 * Return: It will return a pointer to the byte in s that matches one of
 * the bytes in accept, or null if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int index1 = 0;
	int index2;
	char *pointer;

	while (s[index1] != '\0')
	{
		index2 = 0;
		while (accept[index2] != '\0')
		{
			if (accept[index2] == s[index1])
			{
				pointer = &s[index1];
				return (pointer);
			}
			index2++;
		}
		index1++;
	}
	return (0);
}
