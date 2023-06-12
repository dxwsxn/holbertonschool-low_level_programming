#include "main.h"

/**
 * _memset -  sets values to designated bytes.
 * @s: smemory pointer
 * @n: number of bytes to fill
 * @b: what bytes are being filled with
 * Return: pointer to memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
