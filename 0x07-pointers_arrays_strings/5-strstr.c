#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @haystack: The string.
 * @needle: The substring.
 *
 * Return: It will return a pointer to the beginning of the located
 * substring, or null if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *pointer1 = haystack;
		char *pointer2 = needle;

		while (*pointer1 == *pointer2 && *pointer2 != '\0')
		{
			*pointer1++;
			*pointer2++;
		}
		if (*pointer2 == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
