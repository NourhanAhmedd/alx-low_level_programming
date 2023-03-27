#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers.
 *
 * @a: Takes the first input for the function.
 * @b: Takes the second input for the function.
*/

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
