#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns string length
 * @s: variable
 * Return: 0
 */
int _strlen(char *s)
{
	int leng;int leng;

	for (leng = 0; *s != '\0'; s++)
	{
		leng++;
	}
	return (leng);
}
