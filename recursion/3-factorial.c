#include "main.h"
/**
 * factorial - Computes the factorial of a number
 * @n: The number
 *
 * Return: The factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
