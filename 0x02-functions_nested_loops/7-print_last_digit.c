#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 *
 * @number: Takes input for the function.
 *
 * Return: LastDigitValue (Success).
*/

int print_last_digit(int number)
{
	int LastDigitValue;

	if (number < 0)
	{
		LastDigitValue = -1 * (number % 10);
	}
	else
	{
		LastDigitValue = number % 10;
	}
	_putchar(LastDigitValue + '0');
	return (LastDigitValue);
}
