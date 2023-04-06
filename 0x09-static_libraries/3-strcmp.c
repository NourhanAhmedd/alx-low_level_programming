#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: Takes the first input for the function.
 * @s2: Takes the second input for the function.
 *
 * Return: It will return 0 if the two characters are equal.
*/

int _strcmp(char *s1, char *s2)
{
	int result;

	result = 0;
	while (*s1)
	{
		if (*s1 != *s2)
		{
			result = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (result);
}
