#include "main.h"

/**
 * print_rev - function that prints the string in reverse.
 * @s: parameter defined in main.
 * Return: void.
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	while (len >= 0)
	{
		_putchar(*s--), len--;
	}
	_putchar('\n');
}
