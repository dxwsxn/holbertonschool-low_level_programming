#include "main.h"
#include <stdio.h>

/**
 * *strcpy - copies string @src to the buffer
 * pointed to by @dest.
 * @src: copied string
 * @dest: destination of string
 *
 * Return: pointer to @dest
 */
char *strcpy(char *dest, char *src)
{
	int in = 0;

	while (src[in])
	{
		dest[in] = src[in];
		in++
	}
	dest[in] = '\0';

	return (dest);
}
