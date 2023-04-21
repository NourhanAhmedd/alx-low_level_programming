#include "variadic_functions.h"
/**
 * print_strings - Write a function that prints strings,
 * followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The strings.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int index;
	char *s;

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
		printf("%s%s", (s = va_arg(p, char *)) ? s : "(nil)", index ?
				(separator ? separator : "") : "\n");
	}

	/* va_end: It will end traversal of variadic arguments. */
	va_end(p);
}
