#include "3-calc.h"
#include <string.h>

/**
 * main- performs simple operationsmain- performs simple operations
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 on success,
 * 98 if arguments is wrong
 * 99 if none of the above
 * 100 if users tries to div by 0 (you cant)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)if (argc != 4)if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	if (op_func == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	
	return (0);
}
