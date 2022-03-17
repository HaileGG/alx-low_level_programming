#include "main.h"

/**
 * print_numbers - prints the numbers from 0 through 9
 * @a: Variable
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
