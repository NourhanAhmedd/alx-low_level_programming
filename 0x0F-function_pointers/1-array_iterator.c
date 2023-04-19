#include "function_pointers.h"
/**
 * array_iterator - Write a function that executes a function given as
 * a parameter on each element of an array.
 *
 * @array: The array (integer).
 * @size: It is the size of the array.
 * @action: It is a pointer to the function.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Pointer that refers to the end of the array. */
	int *ptr;

	ptr = array + size - 1;
	/* It will check if (array) and (size) and (action) = true : */
	if (array && size && action)
	{
		while (array <= ptr)
		{
			action(*array++);
		}
	}
}
