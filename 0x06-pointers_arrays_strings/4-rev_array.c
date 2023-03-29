#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: Takes input for the function.
 * @n: The number of elements of the array.
*/

void reverse_array(int *a, int n)
{
	int c1;
	int c2;
	int temp;

	for (c1 = 0, c2 = (n - 1); c1 < c2; c1++, c2--)
	{
		temp = a[c1];
		a[c1] = a[c2];
		a[c2] = temp;
	}
}
