#include "main.h"

/**
 * _strncpy - func that copies strings
 * @src: source
 * @dest: destination
 * @n: number of char to copy
 *
 * Return: Char. pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	(i = 0);

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		else
			break;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
