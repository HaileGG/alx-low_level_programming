#include "main.h"

/**
 * string_toupper - change lowercase to uppercase.
 * @s: string.
 * Return: char
 */
char *_string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= '' - 'A';
			i++;
		}
	}
	return (0);
}
