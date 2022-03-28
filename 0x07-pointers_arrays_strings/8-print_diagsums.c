#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print of two  diagonal.
 * @a: int.
 * @size: int size.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int b;
       	int sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - ) * (b +1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
