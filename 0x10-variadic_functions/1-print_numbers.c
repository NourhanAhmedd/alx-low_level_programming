#include "variadic_functions.h"
/**
 * print_numbers - Write a function that prints numbers,
 * followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int index;

	index = n;
	if (!n)
	{
		printf("\n");
		return;
	}

	/* va_start: It will start access to variadic arguments. */
	va_start(p, n);

	while (index--)
	{
		/* va_arg: It will access the next variadic argument. */
		printf("%d%s", va_arg(p, int), index ? (separator ? separator : "") : "\n");
	}

	/* va_end: It will end traversal of variadic arguments. */
	va_end(p);
}
