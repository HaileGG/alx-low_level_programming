#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @s: parameter defined in main.
 * Return: void.
 */
void _puts(char *s)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
