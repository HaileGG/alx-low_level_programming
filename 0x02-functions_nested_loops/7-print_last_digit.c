#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = n * -1;
	a = n %10;
	if (n < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
