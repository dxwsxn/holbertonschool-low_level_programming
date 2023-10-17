#include "main.h"
/**
 * _strcat - func that concentrates two strings
 * @src: source strng
 * @dest: destination
 * Return: pointer to string dest.
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d])
	d++;

	for (s = 0; src[s] != '\0'; s++)
	{
		dest[d + s] = src[s];
	}
	return (dest);
}

