#include "main.h"

/**
 * _strncat - func that links strings
 * @src: source
 * @dest: destination
 * @n: number of bytes
 *
 * Return: Pointer to string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (src[s2] != '\0')
	{
		if (s2 < n)
			dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
