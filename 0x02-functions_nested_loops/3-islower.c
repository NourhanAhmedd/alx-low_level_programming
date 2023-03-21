#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 *
 * @character: Checks the input of the function.
 *
 * Return: 1 (if 'character' is lowercase)
 *         or 0 (if 'character' is not lowercase).
*/

int _islower(int character)
{
	if (character >= 97 && character <= 122)
	{
		return (1);
	}
	return (0);
}
