#include "main.h"

/**
 * leet - encodes string into 1337
 * @v: variable
 *
 * Return: 1337 speak
 */
char *leet(char *v)
{
	int i, j;

	char *a = "aAeEoOtT1L";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (v);
}
