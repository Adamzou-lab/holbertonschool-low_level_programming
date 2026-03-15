#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Description: Each element of the grid is initialized to 0.
 * If width or height is 0 or negative, return NULL.
 *
 * Return: Pointer to the 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	tab = malloc(height * sizeof(int *));
	if (tab == 0)
		return (NULL);

	while (j < height)
	{
		tab[i] = malloc(width * sizeof(int));
		for (i = 0; i < width; i++)
			tab[i][j] = 0;
		j++;
	}
	return (tab);
}
