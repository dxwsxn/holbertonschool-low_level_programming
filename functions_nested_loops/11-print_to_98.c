#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print all natural numbers from i to 98
 * followed by a new line.
 * @i: number to start counting
 */

void print_to_98(int i)
{
	if (i >= 98)
	{
		while (i > 98)
			print("%d, ", i--);
		printf("%d\n", n);
	}
	else
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}
}
