#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination value.
 * @src: source value.
 * @n: limit of the concatenation.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}

	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	if (j < n)
	{
		*(dest + i) = *(src + j);
	}
	return (dest);
}
