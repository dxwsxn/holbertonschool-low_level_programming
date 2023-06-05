#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string to stdout
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
