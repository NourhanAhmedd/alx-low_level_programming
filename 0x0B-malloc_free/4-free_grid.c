#include "main.h"

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @grid: The address of the two dimensional grid.
 * @height: The height of the grid.
*/

void free_grid(int **grid, int height)
{
	int index;

	index = 0;
	for (; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
