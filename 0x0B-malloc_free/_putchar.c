#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a single character to the standard output stream.
 *
 * @character: The function parameter.
 *
 * Return: 1 (Success) or -1 (Error).
*/

int _putchar(char character)
{
	return (write(1, &character, 1));
}
