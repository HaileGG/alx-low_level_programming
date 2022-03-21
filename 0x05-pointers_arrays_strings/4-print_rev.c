#include "main.h"

/**
 * print_rev - function that prints the string in reverse.
 * @s: parameter defined in main.
 * Return: void.
 */
void print_rev(char *s)
{
	int f = 0;

	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		f++;
	}

	for (n = (f - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
