#include "main.h"
#include <stdlib.h>

/**
 * _puts_recursion - prints a new string followed by \n
 * @s: string being printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
