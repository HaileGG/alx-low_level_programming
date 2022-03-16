#include <stdio.h>
#include "main.h"

/**
 * main -  print the first 98 fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
	int c;
	unsigned long i, j, k;
	unsigned long m, n, p, cr;

	c = 0;
	i = 0;
	j = 1;
	for (c = 1; c <= 91; c++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu. ", k);
	}
	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (c <= 98)
	{
		cr = (m + n) / 1000;
		p = (m + n) - cr * 1000;
		k = (i + j) + cr;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu%lu", k, p);
		if (c != 98)
			printf(", ");
		c++;
	}
	putchar('\n');
	return (0);
}
