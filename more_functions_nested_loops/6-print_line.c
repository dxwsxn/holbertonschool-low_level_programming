#include "main.h"
#include <stdio.h>

/**
 * print_line - i wonder what it does
 * @n: number of spaces in the line
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar ('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
