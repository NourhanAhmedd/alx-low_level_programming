#include "variadic_functions.h"
/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: The number of arguments you will enter.
 * @...: The integers.
 * Return: It will return (result).
*/
int sum_them_all(const unsigned int n, ...)
{
	int result;
	int index;
	va_list p;

	index = n;
	if (!n)
	{
		return (0);
	}

	/* va_start: It will start access to variadic arguments. */
	va_start(p, n);

	while (index--)
	{
		/* va_arg: It will access the next variadic argument. */
		result = result + va_arg(p, int);
	}

	/* va_end: It will end traversal of variadic arguments. */
	va_end(p);
	return (result);
}
