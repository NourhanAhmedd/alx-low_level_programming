#include "main.h"

/**
 * asterisk - Function that moves the past asterisk.
 *
 * @s2: String.
 *
 * Return: It will return (asterisk(s2 + 1)) or (s2).
*/

char *asterisk(char *s2)
{
	if (*s2 == '*')
	{
		return (asterisk(s2 + 1));
	}
	else
	{
		return (s2);
	}
}

/**
 * incep - The inception.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: It will return (Return).
*/

int incep(char *s1, char *s2)
{
	int Return = 0;

	if (*s1 == 0)
	{
		return (0);
	}
	if (*s1 == *s2)
	{
		Return = Return + wildcmp(s1 + 1, s2 + 1);
	}
	Return = Return + incep(s1 + 1, s2);
	return (Return);
}

/**
 * wildcmp - Function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: It will return 0 or 1.
*/

int wildcmp(char *s1, char *s2)
{
	int Return = 0;

	if (!*s1 && *s2 == '*' && !*asterisk(s2))
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		if (!*s1)
		{
			return (1);
		}
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
	{
		return (0);
	}
	if (*s2 == '*')
	{
		s2 = asterisk(s2);
		if (!*s2)
		{
			return (1);
		}
		if (*s1 == *s2)
		{
			Return = Return + wildcmp(s1 + 1, s2 + 1);
		}
		Return = Return + incep(s1, s2);
		return (!!Return);
	}
	return (0);
}
