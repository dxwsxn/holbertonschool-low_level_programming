#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concats two strings
 * @s1: str one
 * @s2: str two
 * @n: number of bytes in s2
 * Return: new space in mem, null if nay
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int p;
	unsigned int k = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (j > n)
		j = n;

	len = i + j;

	ar = malloc(sizeof(char) * (len + 1));
	if (ar == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		ar[k++] = s1[p];
	for (m = 0; m < j; m++)
		ar[k++] = s2[m];

	ar[k] = '\0';
	return (ar);
}
