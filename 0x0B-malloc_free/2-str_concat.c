#include "main.h"

/**
 * string_length - Function that prints the string length.
 *
 * @str: The string.
 *
 * Return: It will return (length).
*/

int string_length(char *str)
{
	int length = 0;

	for (; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * *str_concat - Write a function that concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: It will return (p).
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1_size;
	int s2_size;
	int index;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	s1_size = string_length(s1);
	s2_size = string_length(s2);
	p = malloc((s1_size + s2_size) * sizeof(char) + 1);

	if (p == 0)
	{
		return (0);
	}
	for (index = 0; index <= s1_size + s2_size; index++)
	{
		if (index < s1_size)
		{
			p[index] = s1_size[index];
		}
		else
		{
			p[index] = s2_size[index];
		}
	}
	p[index] = '\0';
	return (p);
}
