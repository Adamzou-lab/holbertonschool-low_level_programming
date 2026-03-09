#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The 2D array of integers to be freed.
 * @height: The height of the grid.
 *
 * Description: First frees each individual row of the grid, 
 * then frees the main pointer.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <=0)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
