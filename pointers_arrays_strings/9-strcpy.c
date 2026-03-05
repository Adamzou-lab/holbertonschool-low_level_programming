#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Description: Iterates through the source string, copying each
 * character to the destination buffer, and finally adds the
 * terminating null byte.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
