#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return ptr to new mem spc
 * @str: the string to copy
 * Return: a ptr to string, NULL if no mem
 * or if @str is null
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ar = malloc(sizeof(char) * (i = 1));

	if (ar == NULL)
		return (NULL);

	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}
	ar[j + 1] = 0;
	return (ar);
}
