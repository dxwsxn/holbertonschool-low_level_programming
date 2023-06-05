#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integers
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
