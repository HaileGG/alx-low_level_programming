#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * str_concat - concatnate two strings.
 * @s1: a pointer to the first string.
 * @s2: a pointer to the second string.
 *
 * Return: NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s1 + j) != '\0'; j++)
		;
	c = malloc(i + j +1);
	if (c == 0)
	{
		return (NULL);
	}
	for (j = 0; *(s1 + i) != '\0'; i++)
	{
		c[i] = *(s2 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		c[i + j] = *(s2 + j);
	}
	c[i + j] = *(s2 + j);
	return (c);
}
