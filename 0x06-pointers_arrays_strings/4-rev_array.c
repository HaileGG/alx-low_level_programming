#include "main.h"

/**
 * reverse_array - reverse array.
 * @a: array.
 * @n: integer.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i,sc, ec, c;

	sc = a;
	ec = a;

	for (i = 0; i < n - 1; i++)
	{
		ec++;
	}

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = *ec;
		*ec = *sc;
		*sc = c;

		sc++;
		ec--;
	}
}
