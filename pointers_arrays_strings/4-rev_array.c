#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * Description: Swaps the elements of the array from both ends
 * moving towards the center until the entire array is reversed.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
