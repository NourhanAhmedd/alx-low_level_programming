#include "main.h"

/**
 * _pow_recursion - Function that returns the value
 * of x raised to the power of y.
 *
 * @x: Takes the first input for the function.
 * @y: Takes the second input for the function.
 *
 * Return: It will return (x * _pow_recursion(x, y - 1).
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
