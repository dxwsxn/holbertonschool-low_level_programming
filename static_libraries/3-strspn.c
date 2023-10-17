nclude "main.h"
#include <stdio.h>

/**
 *  * _strspn - searches string to find char
 *   * @s: string
 *    * @select: info that is selected
 *     * Return: the chars that were in the string
 *      */
unsigned int _strspn(char *s, char *select)
{
		unsigned int i = 0;
			unsigned int j = 0;

				while (s[i] != '\0')
						{
									j = 0;
											while (select[j] != '\0')
														{
																		if (s[i] == select[j])
																						{
																											break;
																														}
																					j++;
																							}
													if (select[j] == '\0')
																{
																				return (i);
																						}
															i++;
																}
					return (i);
}
