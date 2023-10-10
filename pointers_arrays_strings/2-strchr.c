#include "main.h"
#include <stdio.h>

/**
 * _strchr - searches string for character
 * @c: string of info
 * @s: character selected
 * Return: return pointer to first detection of info
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	if (s[a] == c)
	{
		return (&s[a]);
	}
	return (NULL);
}
