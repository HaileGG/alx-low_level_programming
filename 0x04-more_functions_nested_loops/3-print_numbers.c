#include "main.h"

/**
 * print_numbers - prints the numbers from 0 through 9
 * @a: Variable
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}