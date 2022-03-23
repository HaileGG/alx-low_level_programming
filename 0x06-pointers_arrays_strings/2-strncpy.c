#include "main.h"

/**
 * _strncpy - copie a string.
 *
 *
 */
char _strncpy(char *dest, char *src, int n)
{
	int i = 0;

	ahile (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
