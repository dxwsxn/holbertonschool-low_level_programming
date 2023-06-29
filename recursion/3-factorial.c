#include "main.h"
#include <stdlib.h>

/**
 * factorial - returns factorial of a num
 * @n: number being use
 * Return: result
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
