#include "main.h"

/**
 * cap_string - func that capitalizes all words in string
 * @v: variable
 *
 * Return: string with capitalized letters
 */
char *cap_string(char *p)
{
	int x;

	for (x = 0; p[x] != '\0'; x++)
	{
		if (p[x] >= 'a' && p[x] <= 'z')
		{
			if (p[x - 1] == '\t' ||
			p[x - 1] == '\n' ||
			p[x - 1] == ',' ||
			p[x - 1] == ';' ||
			p[x - 1] == '.' ||
			p[x - 1] == '!' ||
			p[x - 1] == '?' ||
			p[x - 1] == '"' ||
			p[x - 1] == '(' ||
			p[x - 1] == ')' ||													p[x - 1] == '{' ||
			p[x - 1] == '}' ||
			x == 0)
			{
				p[x] = p[x] - 32;
			}
		}
	}
	return (v);
}

