#include "main.h"
/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of bytes to use from src.
 *
 * Description: Appends the src string to the dest string, using at most
 * n bytes from src. src does not need to be null-terminated if it
 * contains n or more bytes. The resulting dest string is null-terminated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
