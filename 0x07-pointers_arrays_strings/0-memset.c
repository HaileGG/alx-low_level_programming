#include "main.h"

/**
 * *_memset - fill memory with a constatnt byte.
 * @s: char.
 * @b: char.
 * @n: unsigned int.
 * Return: char.
 */
char *_memsetchar(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
