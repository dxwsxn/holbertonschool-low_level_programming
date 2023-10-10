#include "main.h"

/**
 * cap_string - func that capitalizes all words in string
 * @s: string
 *
 * Return: string with capitalized letters
 * arr: current array
 * cbf: character before arr
 */
char *cap_string(char *s)
{
	int arr;
	int cbf;

	for (arr = 0; s[arr] != '\0'; arr++)

	{
		cbf = arr - 1;
		if (s[arr] >= 'a' && s[arr] <= 'z')
		{
			if (arr == 0)
				s[arr] = s[arr] - 32;
			else if (s[cbf] >= 9 && s[cbf] <= 10)
				s[arr] = s[arr] - 32;
			else if (s[cbf] >= 32 && s[cbf] <= 34)
				s[arr] = s[arr] - 32;
			else if (s[cbf] >= 40 && s[cbf] <= 41)
				s[arr] = s[arr] - 32;
			else if (s[cbf] == 46)
				s[arr] = s[arr] - 32;
			else if (s[cbf] == 59)
				s[arr] = s[arr] - 32;
			else if (s[cbf] == 123 || s[cbf] == 125)
				s[arr] = s[arr] - 32;
		}
	}
	return (s);
}
