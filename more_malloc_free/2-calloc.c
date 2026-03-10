#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Description: The memory is set to zero. If nmemb or size is 0,
 * then _calloc returns NULL. If malloc fails, then _calloc returns NULL.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tab = malloc((nmemb * size) * sizeof(unsigned int));
	if (tab == NULL)
		return (NULL);

	total = nmemb * size - 1;
	for (i = 0; i < total; i++)
	{
		tab[i] = 0;
	}
	return (tab);
}
