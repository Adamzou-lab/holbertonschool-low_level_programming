#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: The starting value (included).
 * @max: The ending value (included).
 *
 * Description: The array contains all the values from min to max,
 * ordered from min to max. If min > max, return NULL.
 *
 * Return: The pointer to the newly created array, 
 * or NULL if it fails or if min > max.
 */
int *array_range(int min, int max)
{
	int taille;
	int *tab;
	int i;

	if (min > max)
		return (NULL);
	taille = max - min + 1;

	tab = malloc(taille * sizeof(int));
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < taille; i++)
		tab[i] = min + i;
	return (tab);
}
