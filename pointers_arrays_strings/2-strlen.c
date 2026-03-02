#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string to measure.
 *
 * Description: Iterates through the string until the null
 * terminator is reached to calculate its length.
 *
 * Return: The length of the string as an integer.
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
