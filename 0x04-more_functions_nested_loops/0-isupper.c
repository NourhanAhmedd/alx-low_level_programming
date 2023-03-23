#include "main.h"

/**
 * _isupper - Function that checks for uppercase character.
 *
 * @c: Takes input for the function.
 *
 * Return: 1 (if c is uppercase) or 0 (if c is not uppercase).
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
