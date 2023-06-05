#include "main.h"
#include <stdio.h>

/**
 * _isdigit - my entry please
 * @c: my neighbor (variable)
 * Return: whatever specified
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
