#include "main.h"

/**
 * *_strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: Takes input for the function.
 *
 * Return: It will return (p).
*/

char *_strdup(char *str)
{
	char *p;
	int index = 0;
	int s = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[s] != '\0'; s++)
		;
	p = malloc(s * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (; index < s; index++)
		{
			p[index] = str[index];
		}
	}
	return (p);
}
