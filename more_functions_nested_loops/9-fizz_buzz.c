#include "main.h"
#include <stdio.h>

/**
 * main - entry please
 * Return: 0
 */

int main(void)
{
	int x = 1;

	for (x = 1; x < 101; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (x == 100)
		{
			printf("Buzz");
			continue;
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%i ", x);
	}
	putchar('\n');
	return (0);
}
