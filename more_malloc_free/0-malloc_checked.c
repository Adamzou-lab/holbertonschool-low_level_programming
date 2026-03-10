#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Description: If malloc fails, the malloc_checked function causes
 * normal process termination with a status value of 98.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *tab;

	tab = malloc(b);

	if (tab == NULL)
	{
		exit(98);
	}
	return (tab);
}
