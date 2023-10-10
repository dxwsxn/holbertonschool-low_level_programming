#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string
 *
 * Return: 1337 speak
 */
char *leet(char *s)

{
	int i, j;

	char *let = "aAeEoOtT1L";
	char *val = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = val[j];
			}
		}
	}
	return (s);
}
