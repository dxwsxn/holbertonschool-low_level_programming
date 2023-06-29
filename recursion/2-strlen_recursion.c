#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - function that give str len
 * @s: str to get len from
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
