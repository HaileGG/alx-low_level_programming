#include "main.h"

/**
 * cap_string - captaliza all words in string.
 * @s: string.
 * Return: address of s.
 */
char *cap_string(char *s)
{
	int i = 0;
       	int j = 1;
	char *ans = s;
	char spec = " \t\n;,.!?\"(){}\0";

	while (*s)
	{
		if (j)
		{
			if (*s >= 'a' && *s <= 'z')
			{
				*s -= 32;
				j = 0;
			}

			for (i = 0; spec[i]; i++)
			{
				if (*s == spec[i])
				{
					j = 1;
				}
			}
		}
		s++;
	}
	return (ans);

}
