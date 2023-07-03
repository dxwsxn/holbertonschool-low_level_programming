#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints all args
 * @argc: number of args
 * @argv: array of argc
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i =  0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
