#include "main.h"

/**
 * print_rev - function that prints the string in reverse.
 * @s: parameter defined in main.
 * Return: void.
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\n'; i++)
	{
		continue;
	}
	n = i - 1;
	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
