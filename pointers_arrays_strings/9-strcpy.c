#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 * *_strcpy - copies string @src to the buffer
 * pointed to by @dest.
 * @src: copied string
 * @dest: destination of string
 * Return: char
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
