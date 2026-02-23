#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphab;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (alphab = 'a'; alphab <= 'f'; alphab++)
	{
		putchar(alphab);
	}
	putchar('\n');
	return (0);
}
