#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name being print
 * @f: func to send name
 * Return: nothingReturn: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
