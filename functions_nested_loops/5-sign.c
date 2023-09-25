#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_sign - printing sign
 * @i: descriptiom
 * Return: 0 or 1 or -1
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
