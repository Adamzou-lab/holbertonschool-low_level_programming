#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int lastd;

	lastd = i % 10;

	if (lastd < 0)
	{
		lastd = -lastd;
	}

	_putchar(lastd + '0');

	return (lastd);
}
