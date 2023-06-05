#include "main.h"

/**
 * puts2 - prints every other character in string
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + 1));
		i++;

		if (*(str + i) == '\0')
			break;
		i++;
	}
	_putchar('\n');
}
