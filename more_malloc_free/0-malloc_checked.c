#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - func that allocates mem
 * @b: num to allocate mem
 */
void *malloc_checked(signed int b)
{
	unsigned int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
