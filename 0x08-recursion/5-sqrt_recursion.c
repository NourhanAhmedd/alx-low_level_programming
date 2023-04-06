#include "main.h"

/**
 * SquareRoot - Function that prints the natural square root.
 *
 * @n: Takes input for the function.
 * @sroot: The square root.
 *
 * Return: It will return (SquareRoot(n, sroot + 1)) or
 * (sroot) or (-1).
*/

int SquareRoot(int n, int sroot)
{
	if (sroot * sroot < n)
	{
		return (SquareRoot(n, sroot + 1));
	}
	else if (sroot * sroot == n)
	{
		return (sroot);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 *
 * @n: Takes input for the function.
 *
 * Return: It will return (SquareRoot(n, 1)).
*/

int _sqrt_recursion(int n)
{
	return (SquareRoot(n, 1));
}
