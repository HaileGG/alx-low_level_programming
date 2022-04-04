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
char *_str_concat(char *s1, char *s2)
{
	unsigned int ln1 = 0, ln2 = 0;
	char *c;

	if (s1)
	{
		while (s1[ln1])
			++ln1;
	}
	else
	{
		s1 = " ";
	}
	if (s2)
	{
		while (s1[ln2])
			++ln2;
	}
	else
	{
		s2 = " ";
	}

	c = (char *)malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!c)
		return (NULL);
	if (s1)
	{
		for (ln2 = 0; s2[ln2]; ++ln2)
			c[ln1+ln2] = s2[ln2];
	}
	c[ln1 + ln2] = '\0';
	return (c);
}
