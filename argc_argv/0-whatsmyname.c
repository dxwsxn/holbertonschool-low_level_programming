#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print program name
 * @argc: count
 * @argv: vector
 * Return: Program name
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
