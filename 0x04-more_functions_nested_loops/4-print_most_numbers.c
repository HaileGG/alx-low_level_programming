#include "main.h"

/**
 * print_most_numbers - prints most numbers from 0 through 9
 * @a: Variable
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if ((a == '2') || (a == '4'))
			;
		else
			_putchar(a);
	}
	_putchar('\n');
}
