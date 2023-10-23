#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates arr and int with a spec char
 * @size: size of arry
 * @c: char to int the array
 * Return: pointer to array, null if nay.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
