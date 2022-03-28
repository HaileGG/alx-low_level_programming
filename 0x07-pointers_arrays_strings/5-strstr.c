#include "main.h"

/**
 * *_strstr - locate a substring.
 * @haystack: string.
 * @needle: string.
 * Return: string.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, c, i = 0;

	while (*(haystack + i) != '\0')
	{
		c = i;
		j = 0;
		while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0' && *(haystack + j) != '\0')
		{
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + c);
		}
		i = c + 1; 
	}
	return (0);
}
