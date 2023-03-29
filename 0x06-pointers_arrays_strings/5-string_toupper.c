#include "main.h"

/**
 * *string_toupper - Function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: Takes input for the function.
 *
 * Return: It will return s.
*/

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 97 && s[index] <= 122)
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
