#include "main.h"

/**
 * rev_string - function that prints the string reverse.
 * @s: input to reverse.
 * Return: string revers.
 */
void rev_string(char *s)
{
	int i, j;
	char aux;

	i = _strlen(s);
	i++;

	for (j = 0; j <= i; j++, i--)
	{
		aux = s[j];
		s[j] = s[i];
		s[i] = aux;
	}
}
