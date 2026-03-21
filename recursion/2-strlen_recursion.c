#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Count the lenght of a string
 * @s: The string to count
 *
 * Return: The lenght of the string or NULL if s is 0
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
