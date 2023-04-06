#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 *
 * @s: The first string.
 * @accept: The second string.
 *
 * Return: It will return the number of bytes in the initial
 * segment of s which consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index1;
	unsigned int index2;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != s[index1]; index2++)
		{
			if (accept[index2] == '\0')
			{
				return (index1);
			}
		}
	}
	return (index1);
}
