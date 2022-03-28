#include "main.h"

/**
 * *_strchr - loate a character in a string.
 * @s: string.
 * @c: char.
 * Return: pointer to char.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
