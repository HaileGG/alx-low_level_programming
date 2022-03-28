#include "main.h"

/**
 * *_strstr - locate a substring.
 * @haystack: string.
 * @needle: string.
 * Return: string.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i, k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needel[j] != '\0')
		{
			k++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
