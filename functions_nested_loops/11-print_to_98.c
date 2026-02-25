#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	printf("%d\n", n);
}
