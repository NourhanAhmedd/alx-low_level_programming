#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: The array (integer).
 * @size: It is the number of elements in the array array.
 * @cmp: It is a pointer to the function.
 *
 * Return: (int_index) returns the index of the first element for
 * which the (cmp) function does not return 0,
 * and if no element matches return -1,
 * and if size <= 0 return -1.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	/* The index: */
	int index;

	index = 0;
	/* It will check if (array) and (size) and (cmp) = true : */
	if (array && size && cmp)
	{
		while (index < size)
		{
			/* It will call the (cmp) function with the (array[index]): */
			if (cmp(array[index]))
			{
				return (index);
			}
			index++;
		}
	}
	return (-1);
}
