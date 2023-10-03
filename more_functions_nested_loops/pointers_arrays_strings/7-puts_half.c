#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of string
 * @s:string
 */

void puts_half(char *s)
{
	int j, i = 0;

	while (*(s + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(s + j));
		j++;
	}
	_putchar('\n');
}
