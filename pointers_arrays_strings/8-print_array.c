#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements of the array to be printed.
 *
 * Description: Iterates through the array and prints each element
 * followed by a comma and space, except for the last element.
 * Ends with a new line.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
