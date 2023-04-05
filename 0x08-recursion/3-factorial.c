#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 *
 * @n: Takes input for the function.
 *
 * Return: It will return (n * factorial(n - 1)).
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
