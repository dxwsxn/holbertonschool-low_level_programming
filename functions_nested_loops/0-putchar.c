#include <main.h>
#include <unistd.h>

/**
 * main - print putchar
 *
 * Return:0
 */
int main(void)
{
	char *myput = "_putchar";
	int i;

	for (i = 0; myput[i]; i++)
		_putchar(myput[i]);

	_putchar('\n');

	return (0);
}
