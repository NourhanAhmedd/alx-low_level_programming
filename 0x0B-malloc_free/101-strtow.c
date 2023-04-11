#include "main.h"

/**
 * number_of_words - Function that prints the number of words.
 *
 * @STR: The string.
 *
 * Return: It will return (count).
*/

int number_of_words(char *STR)
{
	int count = 0;
	int index;

	for (index = 0; STR[index]; index++)
	{
		if (STR[index] == ' ')
		{
			if (STR[index + 1] != ' ' && STR[index + 1] != '\0')
			{
				count++;
			}
			else if (index == 0)
			{
				count++;
			}
		}
	}
	count++;
	return (count);
}

/**
 * **strtow - Write a function that splits a string into words.
 *
 * @str: The string.
 *
 * Return: It will return (p).
*/

char **strtow(char *str)
{
	char **p;
	int c = 0, w = 0, i1, i2, i3, i4;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = number_of_words(str);
	if (c == 1)
		return (NULL);
	p = (char **)malloc(c * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[c - 1] = NULL;
	i1 = 0;
	while (str[i1])
	{
		if (str[i1] != ' ' && (i1 == 0 || str[i1 - 1] == ' '))
		{
			for (i2 = 1; str[i1 + i2] != ' ' && str[i1 + i2]; i2++)
				;
			i2++;
			p[w] = (char *)malloc(i2 * sizeof(char));
			i2--;
			if (p[w] == NULL)
			{
				for (i3 = 0; i3 < w; i3++)
					free(p[i3]);
				free(p[c - 1]);
				free(p);
				return (NULL);
			}
			for (i4 = 0; i4 < i2; i4++)
				p[w][i4] = str[i1 + i4];
			p[w][i4] = '\0';
			w++;
			i1 = i1 + i2;
		}
		else
			i1++;
	}
	return (p);
}
