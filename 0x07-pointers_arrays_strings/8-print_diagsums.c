#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: The 2D array.
 * @size: The size of 2D array.
*/

void print_diagsums(int *a, int size)
{
	int index;
	int result1 = 0;
	int result2 = 0;

	for (index = 0; index < size; index++)
	{
		result1 = result1 + a[index];
		result2 = result2 + a[size - index - 1];
		a = a + size;
	}

	printf("%d ", result1);
	printf("%d\n", result2);
}
