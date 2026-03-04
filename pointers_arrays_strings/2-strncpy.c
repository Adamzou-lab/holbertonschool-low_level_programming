#include "main.h"
/**
 * _strncpy - Copies a string up to n characters.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied from src.
 *
 * Description: Copies at most n characters from the string pointed
 * to by src to dest. If the length of src is less than n, the
 * remaining characters in dest are filled with null bytes ('\0').
 *
 * Return: Pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
