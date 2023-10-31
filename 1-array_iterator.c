#include "function_pointers.h"
/**
 * array_iterator - applies a func to every arr element
 * @array: array being used
 * @size: size of arr
 * @action: func executing
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
