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
	int i = 0;
	int x = size *size;
	int s = 0, t = 0;

	while (i < x)
	{
		s += a[i];
		i += size + 1;
	}
	i += size -1;
	while (i < x -1)
	{
		t += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", s, t);
}
