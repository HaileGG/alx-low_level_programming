#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: char
 * @size: int
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int c, d;

	while (c < size)
	{
		printf("%0.8x", c);
		d = 0;

		while (d < 10)
		{
			printf("%0.2x", b[c + d]);
			if ((d % 2 == 0 && d != 0) || (c + d > size - 1))
		 	{
				printf(" ");
			}
			d++;
		}
		c += 10;
		printf("\n"); 
	}
}
