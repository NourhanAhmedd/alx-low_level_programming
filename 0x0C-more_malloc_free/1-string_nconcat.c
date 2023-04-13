#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - Write a function that concatenates two strings.
 *
 * @s1: The first string (pointer 1).
 * @s2: The second string (pointer 2).
 * @n: The first n bytes of s2.
 *
 * Return: It will return (p).
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int index1;
	unsigned int length1;
	unsigned int index2;
	unsigned int length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	p = malloc(length1 + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		p[index1] = s1[index1];
	}
	for (index2 = 0; index2 < n; index2++)
	{
		p[index1] = s2[index2];
		index1++;
	}

	p[index1] = '\0';
	return (p);
}
