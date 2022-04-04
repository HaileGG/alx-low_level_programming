#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **strtow - splits a string into words.
 *
 * @str: string to split.
 *
 * Return: pointer to array of ftrings.
 */
char **strtow(char *str)
{
	char **a;
	int i, j, n, wc = 0, wl = 0, cw = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			wc++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (wc == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (wc + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, j = i; cw < wc; i++, wl = 0, j = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + j) != ' ' && *(str + j++))
			wl++;
		a[cw] = malloc(sizeof(char) * wl + 1);
		if (!a[cw])
		{
			while (cw-- >= 0)
				free(a[cw]);
			free(a);
			return (NULL);
		}
		for (n = 0; i < j; i++, n++)
			a[cw][n] = *(str + i);
		a[cw++][n] = '\0';
	}
	a[wc] = NULL;
	return (a);
}
