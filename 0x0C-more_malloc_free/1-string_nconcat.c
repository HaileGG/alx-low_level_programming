#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenations two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The max number of bytes of s2.
 * Return: NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cont;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	cont = malloc(sizeof(char) * (l + 1));

	if (cont == NULL)
		return (NULL);

	l = 0;
	for (i = 0; s1[i]; i++)
		cont[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cont[l++] = s2[i];

	cont[l] = '\0';

	return (cont);
}
