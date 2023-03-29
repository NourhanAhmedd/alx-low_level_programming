#include "main.h"
#include <stdio.h>

/**
 * lowercase - Function that determines if a letter is lowercase.
 *
 * @character: Takes input for the function.
 *
 * Return: It will return (character >= 97 && character <= 122).
*/

int lowercase(char character)
{
	return (character >= 97 && character <= 122);
}

/**
 * SeparatorsOfWords - Function that determines if a letter
 * is separator of words.
 *
 * @character: Takes input for the function.
 *
 * Return: (If it is a separator, it will return 1) or
 * (If it is not a separator, it will return 0).
*/

int SeparatorsOfWords(char character)
{
	int index;
	char separators[] = " \t\n,.!?\"(){}";

	for (index = 0; index < 12; index++)
	{
		if (character == separators[index])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * *cap_string - Function that capitalizes all words of a string.
 *
 * @s: Takes input for the function.
 *
 * Return: It will return pointer.
*/

char *cap_string(char *s)
{
	char *pointer = s;
	int separator;

	separator = 1;
	while (*s)
	{
		if (SeparatorsOfWords(*s))
		{
			separator = 1;
		}
		else if (lowercase(*s) && separator)
		{
			*s = *s - 32;
			separator = 0;
		}
		else
		{
			separator = 0;
		}
		s++;
	}
	return (pointer);
}
