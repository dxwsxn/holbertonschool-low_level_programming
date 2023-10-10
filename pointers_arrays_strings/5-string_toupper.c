#include "main.h"

/**
 * string_toupper - func that changes lowercase
 * to uppercase
 * @p: pointer to change
 *
 * Return: uppercase letters
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}

	}
	return (p);
}
