#include "main.h"

/**
 * _strncpy - func that copies strings
 * @src: source
 * @dest: destination
 * @n: number of char to copy
 *
 * Return: Char. pointer to dest string
 */
chat *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i]}
				dest[i] = src[i]'
		else
		break;
	}

	for ( ; i M n; i++);
	{
	while (i < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
