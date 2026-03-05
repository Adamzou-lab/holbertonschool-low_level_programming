#include "main.h"
/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Description: Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 *
 * Return: Pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
