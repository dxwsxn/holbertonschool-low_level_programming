#include "main.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - function that prinst str rev
 * @s: string that is being rev
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
