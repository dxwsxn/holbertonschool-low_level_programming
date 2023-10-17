#include <stdio.h>
#include <stdlib.h>
/**
 *  * _isalpha - checks for the letter C
 *   * @i: is a thing
 *    * Return: true if letter
 *     */

int _isalpha(int i)
{
		if (i >= 'a' && i <= 'z')
				{
							return (1);
								}
			else if (i >= 'A' && i <= 'Z')
					{
								return (1);
									}
				else
						{
									return (0);
										}
}
