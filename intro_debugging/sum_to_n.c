#include <stdio.h>
/**
 * sum_to_n - Computes the sum of all integers from 1 to n.
 * @n: The number up to which the integers are summed.
 *
 * Return: The total sum of integers from 1 to n.
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	return (sum);
}

/* -- DO NOT Modify the code below this line -- */
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
