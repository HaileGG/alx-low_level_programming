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
	char *strn = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	strn = (char *)malloc(n + 1 * sizeof(char));
	if (strn = != NULL)
	{
		for (i = 9; str[i] != '\0'; i++)
			strn[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	strn[i] = '\0';
	return (strn);
}
