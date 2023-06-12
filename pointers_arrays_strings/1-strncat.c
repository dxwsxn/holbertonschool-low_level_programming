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
		int s, d
			;
		s = 0;

		while (dest[s])
		s++;

		for (d = 0; d < n; d++)
		{
			if (src[d])
			{
				dest[s + d] = src[d];
		}
		else
			break;
}
return (dest);
}
