#include "main.h"

/**
 * palind2 - obtains length of a.
 * @a: string.
 * @l: integer to count length.
 *
 * Return: On success 1.
 */
int palind2(char *c, int s, int e)
{
	if (s == e)
	{
		return (1);
	}
	if (c[s] != c[e])
	{
		return (0);
	}
	if (s < e + 1)
	{
		return (palind2(c, s + 1, e - 1));
	}
	return (1);
}
/**
 * palind3 - compares string vs string reverse.
 * @a: string.
 * @l: length.
 *
 * Return: On success 1.
 */
int palind3(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + palind3(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindroem.
 * @s: string to evaluate.
 *
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	int count = palind3(s);

	if (count == 0)
	{
		return (1);
	}
	return (palind2(s, 0, count - 1));
}
