#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: First calculates the length of the string, then
 * iterates backward from the last character to the first,
 * printing each character using _putchar, followed by a newline.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i;
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur++;
	}
	
	i = longueur - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}