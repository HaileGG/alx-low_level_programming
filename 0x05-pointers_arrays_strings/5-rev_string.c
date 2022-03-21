#include "main.h"

/**
 * rev_string - function that prints the string reverse.
 * @s: input to reverse.
 * Return: string revers.
 */
void rev_string(char *s)
{
	char r = s[0];
	int f = 0;
	int i;

	while (s[f] != '\0')
		f++;

	for (i = 0; i < f; i++)
	{
		f--;
		r = s[i];
		s[i] = s[f];
		s[f] = r;
	}
}
