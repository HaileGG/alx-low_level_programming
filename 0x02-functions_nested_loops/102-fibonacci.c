#include "main.h"
#include <stdio.h>

/**
 * main - print the first 50 fabonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long c, i, j, k;

	i = 0;
	j = 1;
	for (c = 0; c <= 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (c == 49)
			printf('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);


}
