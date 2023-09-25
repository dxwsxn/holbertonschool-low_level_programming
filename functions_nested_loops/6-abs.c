#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - computes absolute vaules
 * @i: is a variable
 * Return: i
 */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
