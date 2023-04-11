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
	int length;

	length = 0;
	for (; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * *argstostr - Write a function that concatenates all the
 * arguments of your program.
 *
 * @ac: Argument Count.
 * @av: Argument Vector.
 *
 * Return: It will return (p).
*/

char *argstostr(int ac, char **av)
{
	char *p;
	int index1 = 0;
	int index2 = 0;
	int size = 0;
	int c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (; index1 < ac; index1++, size++)
	{
		size = size + string_length(av[index1]);
	}
	p = malloc(sizeof(char) * size + 1);
	if (p == 0)
	{
		return (NULL);
	}
	for (index1 = 0; index1 < ac; index1++)
	{
		for (index2 = 0; av[index1][index2] != '\0'; index2++, c++)
		{
			p[c] = av[index1][index2];
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
