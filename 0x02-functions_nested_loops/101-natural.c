#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum off all the multiple of
 * 3 or 5 below 1024.
 * Return: Nothing.
 */
int main(void)
{
	int i, r;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			r += i;

	printf("%d\n", r);
	return (0);
}
