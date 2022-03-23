#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @C: char
 * @size: int
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i+=10)
	{
		printf("%08i", i);

		for (j = 0; j < 10; j++)
		{
			if (j + i >= size)
				printf("  ");

			else
				printf("%02i", *(b + j + i));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

	for (j = 0; j < 10; j++)
	{
		if ((j + i) >= size)
			break;

		else if (*(b + j + i) >= 31 && *(b + j + i) <= 126)
			printf("%c", *(b + j + i));

		else 
			printf(".");
	}
	if (i >= size)
		continue;
	printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
