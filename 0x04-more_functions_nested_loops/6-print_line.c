#include "main.h"

/**
 * print_line - prints the straight lines
 *
 * @x: Variable
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		for (x = 1; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
