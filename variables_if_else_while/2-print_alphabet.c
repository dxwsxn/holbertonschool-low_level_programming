#include <stdio.h>
/**
 * main - prints alph in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		purchar(letter);

	putchar('\n');

	return (0);
}
