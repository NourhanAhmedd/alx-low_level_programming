#include "function_pointers.h"
/**
 * print_name - Write a function that prints a name.
 *
 * @name: The string.
 * @f: The function pointer.
*/
void print_name(char *name, void (*f)(char *))
{
	/* It will check if (name) and (f) = true : */
	if (name && f)
	{
		/* It will call the function. */
		f(name);
	}
}
