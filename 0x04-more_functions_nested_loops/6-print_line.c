#include "main.h"

/**
 * print_line - prints the straight lines
 * @x: Variable
 * @n: Vaiable
 * Return: Always 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
