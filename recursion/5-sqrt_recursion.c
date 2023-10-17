#include "main.h"

int sqrt2(int n, int i);
/**
 * _sqrt_recursion - returns natty sqrt of a num
 * @n: number
 * Return: sqrt or -1 if no natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt2(n, 0));
}

/**
 * sqrt2 - makes the con between 1 and n
 * @n: the numbah
 * @i: the iteration numb
 * Return: 1 on success
 */
int sqrt2(int n, int i)
{
	if (i * i == n)
		return (n);
	else if (i * i > n)
		return (-1);
	return (sqrt2(n, i + 1));
}
