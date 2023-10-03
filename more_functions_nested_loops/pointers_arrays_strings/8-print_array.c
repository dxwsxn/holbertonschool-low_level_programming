#include "main.h"

/**
 * print_array - prints elemnts of array
 * @a: array
 * @n: numbah
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
