#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to find.
 *
 * Description: Finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0)
 * are not compared.
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
