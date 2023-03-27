#include "main.h"

/**
 * puts_half - Function that prints half of a string, followed by a new line.
 *
 * @str: Takes input for the function.
*/

void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;

	length++;
	for (length /= 2; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
