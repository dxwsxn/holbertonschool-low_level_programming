#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for seleted info
 * @s: string
 * @select: info that is selected
 * Return: The chars that match selected
 */
char *_strpbrk(char *s, char *select)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (select[j] != '\0')
		{
			if (s[i] == select[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
