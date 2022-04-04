#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point.
 * @str: string we need to duplicate.
 * Return: pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;
		dup = malloc(sizeof(char) * size);
		if (dup)
		{
			while (size--)
				dup[size] = str[size];

			return (dup);
		}
	}
	return (NULL);
}
