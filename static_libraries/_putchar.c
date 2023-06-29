#include <unistd.h>
/**
 * _putchar - writes char to c to stdout
 * @c: character
 *
 * Return: 1 if yay -1 if err
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
