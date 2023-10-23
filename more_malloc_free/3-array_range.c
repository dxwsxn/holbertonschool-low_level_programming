#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates arr
 * @min: smallest int in arr
 * @max: largest in in arr
 * Return: ptr to arr, NULL if min > max
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
