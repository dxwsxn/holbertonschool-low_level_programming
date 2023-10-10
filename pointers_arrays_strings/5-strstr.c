#include "main.h"

/**
 * _strstr - func that locates substring
 * @findstr: string to be found
 * @mess: string searched
 * Return: Pointer to beginning of substring null if not
 */
char *_strstr(char *mess, char *findstr)
{
	int i;
	int s = 0;

	while (findstr[s] != '\0')
		s++;

	while (*mess)
	{
		for (i = 0; findstr[i]; i++)
		{
			if (mess[i] != findstr[i])
				break;
		}
		if (i != s)
			mess++;
		else
			return (mess);
	}
	return (NULL);
}
