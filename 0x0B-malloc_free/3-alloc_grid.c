#include "main.h"

/**
 * **alloc_grid - Write a function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: The array width.
 * @height: The array height.
 *
 * Return: It will return (p).
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int row;
	int column;

	p = malloc(sizeof(*p) * height);
	if (width <= 0 || height <= 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		for (row = 0; row < height; row++)
		{
			p[row] = malloc(sizeof(**p) * width);
			if (p[row] == 0)
			{
				while (row--)
				{
					free(p[row]);
				}
				free(p);
				return (NULL);
			}
			for (column = 0; column < width; column++)
			{
				p[row][column] = 0;
			}
		}
	}
	return (p);
}
