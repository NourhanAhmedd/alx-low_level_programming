#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 *
 * @number: Takes input for the function.
 *
 * Return: 1 (If the first condition is true)
 *         , 0 (If the second condition is true)
 *         or -1 (If the third condition is true).
*/

int print_sign(int number)
{
	if (number > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (number == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
