#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to print.
 *
 * Description: Takes a string as a parameter and prints
 * it character by character using _putchar, then prints
 * a new line character.
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
