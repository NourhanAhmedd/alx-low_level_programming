#include "main.h"

/**
 * _atoi - Function that convert a string to an integer.
 *
 * @s: Takes input for the function.
 *
 * Return: Integer.
*/

int _atoi(char *s)
{
	unsigned int number = 0;
	int SignOfTheNumber = 1;

	do {
		if (*s == '-')
		{
			SignOfTheNumber = SignOfTheNumber * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
			break;
	} while (*s++);

	return (number * SignOfTheNumber);
}
