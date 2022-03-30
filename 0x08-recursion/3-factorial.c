#include "main.h"

/**
 * factorial - function that returns factorial of number.
 * @n: int, number.
 *
 * Return: returns factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
