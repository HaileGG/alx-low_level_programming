#include "main.h"

/**
 * print_numbers - prints the numbers from 0 through 9
 * @a: Variable
 * Return: Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');
	_putchar('\n');
}
