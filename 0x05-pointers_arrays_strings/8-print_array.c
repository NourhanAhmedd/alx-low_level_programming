#include "main.h"

/**
 * print_array - Function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: Takes input for the function.
 * @n: The number of elements of the array to be printed.
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != (n - 1))
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
	}
	printf("\n");
}
