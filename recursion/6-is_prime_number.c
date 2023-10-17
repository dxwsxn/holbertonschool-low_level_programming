#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number - returns 1 if prime num
 * @n: number looked at
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n / 2, n));
}

/**
 * prime - finds number
 * @n: bymber
 * @i: input
 * Return: 1 if prime 0 if not
 */
int prime(int n, int i)
{
	if (n == 1)
		return (1);

	if (i % n == 0)
		return (0);
	return (prime(n - 1, i));
}
