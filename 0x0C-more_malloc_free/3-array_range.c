#include "main.h"

/**
 * *array_range - Write a function that creates an array of integers.
 *
 * @min: The minimum number.
 * @max: The maximum number.
 *
 * Return: It will return (p).
*/

int *array_range(int min, int max)
{
	int *p;
	int index;
	int length;

	if (min > max)
	{
		return (NULL);
	}

	length = max - min + 1;
	p = malloc(sizeof(int) * length);

	if (!p)
	{
		return (NULL);
	}

	for (index = 0; index < length; index++)
	{
		p[index] = min++;
	}
	return (p);
}
