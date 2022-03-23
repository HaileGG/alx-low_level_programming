#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string.
 * Retrun: adress of s.
 */
char *leet(char *s)
{
	int i = 0;
	char *ans = s;
	char *spec1 = "aAeEoOtTlL";
	char *spec2 = "4433007711";

	while (*s)
	{
		for (i = 0; spec[i]; i++)
		{
			if (*s = spec1[i])
			{
				*s = spec2[i];
			}
		}
		s++;
	}
	return (ans);
}
