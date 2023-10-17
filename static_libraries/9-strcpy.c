#include "main.h"
#include <stdio.h>
#include "2-strlen.c"
/**
 *  * *_strcpy - copies string @src to the buffer
 *   * pointed to by @dest.
 *    * @src: copied string
 *     * @dest: destination of string
 *      *
 *       * Return: char
 *        */
char *_strcpy(char *dest, char *src)
{
		int x;
			int leng = _strlen(src);

				for (x = 0; x < leng; x++)
						{
									src[x] = dest[x];
										}
					return (dest);
}
