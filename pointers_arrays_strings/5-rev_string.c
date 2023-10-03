#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: Empty (output of function)
 */
void rev_string(char *s)
{
	int a = 0;
	int b, i;
	char temp;

	while (s[a] != '\0')
	{
		a++
	}
	b = a / 2;

	for (i = 0; i < b; i++)
	{
		temp = s[i];

		s[i] = s[a - i - 1];
		s[a - i - 1] = temp;
	}
}
