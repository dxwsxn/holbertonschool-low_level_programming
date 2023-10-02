#include "main.h"
#include <stdio.h>

/**
 * more_numbers - wow more numbah
 */
void more_numbers(void)
{
	int x;
	int y;
	char c[] = "0123456789101121314";

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 19; x++)
		{
			putchar(c[x]);
		}
		putchar('\n');
	}
}
