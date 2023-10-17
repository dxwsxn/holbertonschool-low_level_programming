#include "main.h"

/**
 * _memcpy - fills bytes with values
 * @dest: pointer to the destination
 * @n: number of bytes to fill mem
 * @src: the bytes being filled
 * Return: pointer to memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
