#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - you still want an explanation?
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}
	putchar ('\n');
}
