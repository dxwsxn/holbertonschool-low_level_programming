#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a nubmber
 * @i: computer numbah
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}
