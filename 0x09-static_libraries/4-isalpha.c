#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 *
 * @character: The function parameter.
 *
 * Return: 1 (If the first and second conditions are true)
 *         or 0 (If the first and second conditions are not true).
*/

int _isalpha(int character)
{
	if (character >= 97 && character <= 122)
	{
		return (1);
	}
	if (character >= 65 && character <= 90)
	{
		return (1);
	}
	return (0);
}
