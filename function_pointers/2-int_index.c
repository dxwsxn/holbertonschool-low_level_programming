#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for inte
 * @array: array being searched thru
 * @size: size of arr
 * @cmp: ptr to func that compares values
 * Return: index of first elem
 * if no element match, -1
 * if size <=0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
