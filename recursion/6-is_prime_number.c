#include "main.h"
/**
 * is_prime_helper - recursive helper to check divisibility
 * @n: the number to check
 * @div: current divisor
 *
 * Return: 1 if no divisor found (prime), 0 otherwise
 */
static int is_prime_helper(int n, int div)
{
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: integer to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, 2));
}
