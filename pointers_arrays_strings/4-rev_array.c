#include "main.h"

/**
 * reverse_array - func that reverese array
 * @a: array
 * @n: number of elements rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
