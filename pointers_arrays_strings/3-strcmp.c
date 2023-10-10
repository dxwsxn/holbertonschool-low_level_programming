#include "main.h"
/**
 * _strcmp - func that compares strings
 * @str1:  string one
 * @str2: string two
 *
 * Return: -
 */
int _strcmp(char *str1, char *str2)
{
	int compare = 0;

	while ((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	compare = *str1 - *str2;

	return (compare);
}
