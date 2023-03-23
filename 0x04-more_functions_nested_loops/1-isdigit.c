#include "main.h"

/**
 * _isdigit - Function that checks for a digit (0 through 9).
 *
 * @c: Takes input for the function.
 *
 * Return: 1 (If c is a digit) or 0 (If c is not a digit).
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
