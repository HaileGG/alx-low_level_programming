#include "main.h"

/**
 * sqrt2 - makes possible to evaluate from 1 to 0.
 * @a: number integer.
 * @b: number that itrates from 1 to 0.
 * Return: On success 1.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural number square root of n.
 * @n: number integer.
 *
 * Return: On success 1.
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
