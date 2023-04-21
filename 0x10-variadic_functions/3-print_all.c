#include "variadic_functions.h"
/**
 * char_f - The char format.
 * @separator: The string to be printed between numbers.
 * @p: The pointer.
*/
void char_f(char *separator, va_list p)
{
	/* separator: The string to be printed between numbers. */
	/* va_arg: It will access the next variadic argument. */
	printf("%s%c", separator, va_arg(p, int));
}

/**
 * int_f - The int format.
 * @separator: The string to be printed between numbers.
 * @p: The pointer.
*/
void int_f(char *separator, va_list p)
{
	/* separator: The string to be printed between numbers. */
	/* va_arg: It will access the next variadic argument. */
	printf("%s%d", separator, va_arg(p, int));
}

/**
 * float_f - The float format.
 * @separator: The string to be printed between numbers.
 * @p: The pointer.
*/
void float_f(char *separator, va_list p)
{
	/* separator: The string to be printed between numbers. */
	/* va_arg: It will access the next variadic argument. */
	printf("%s%f", separator, va_arg(p, double));
}

/**
 * string_f - The string format.
 * @separator: The string to be printed between numbers.
 * @p: The pointer.
*/
void string_f(char *separator, va_list p)
{
	char *s = va_arg(p, char *);

	switch ((int)(!s))
		case 1:
			s = "(nil)";
	printf("%s%s", separator, s);
}

/**
 * print_all - Write a function that prints anything.
 * @format: The list of types of arguments passed to the function.
 * @...: char, int, float or string.
*/
void print_all(const char * const format, ...)
{
	va_list p;
	int index1 = 0;
	int index2;
	char *s = "";
	token_t formats[] = {
		{"c", char_f},
		{"i", int_f},
		{"f", float_f},
		{"s", string_f},
		{NULL, NULL}
	};
	/* va_start: It will start access to variadic arguments. */
	va_start(p, format);

	while (format && format[index1])
	{
		index2 = 0;

		while (formats[index2].token)
		{
			if (format[index1] == formats[index2].token[0])
			{
				formats[index2].f(s, p);
				s = ", ";
			}
			index2++;
		}
		index1++;
	}
	printf("\n");
	/* va_end: It will end traversal of variadic arguments. */
	va_end(p);
}
