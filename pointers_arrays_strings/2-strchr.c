#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to locate.
 *
 * Description: Searches for the first occurrence of the character c
 * in the string s.
 *
 * Return: A pointer to the first occurrence of the character c,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
