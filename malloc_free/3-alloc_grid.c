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

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(sizeof(int *) * height);
	if (tab == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(tab[i]);
			}
			free(tab);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
