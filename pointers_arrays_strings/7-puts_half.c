#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: Calculates the string length and determines the starting
 * point to print the second half. If the length is odd, it prints the last
 * (length - 1) / 2 characters.
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	i = (len + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
