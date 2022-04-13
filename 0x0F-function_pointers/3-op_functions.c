#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add -Adds a and b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substructs a from b
 * @a: an integer.
 * @b: an integer.
 *
 * Return: difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a with b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a by b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: quetient.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Mode of a by b.
 * @a: an integer.
 * @b: an integer.
 *
 * Return: mod.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
