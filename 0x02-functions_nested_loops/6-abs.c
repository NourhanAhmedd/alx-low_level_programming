#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @number: Takes input for the function.
 *
 * Return: 0 (Success).
*/

int _abs(int number)
{
	if (number < 0)
	{
		number = (-1) * number;
	}
	return (number);
}
