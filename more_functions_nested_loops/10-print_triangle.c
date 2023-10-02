#include "main.h"
#include <stdio.h>

/**
 * print_triangle - i like turtles
 * @size: size of turtles
 */

void print_triangle(int size)
{
	int spaces;
	int rows;

	if (size > 0)
	{
		for (spaces = 1; spaces <= size; spaces++)
		{
			for (rows = 1; rows <= size; rows++)
			{
				if ((spaces + rows) > size)
				{
					putchar(35);
				}
				else
				{
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
