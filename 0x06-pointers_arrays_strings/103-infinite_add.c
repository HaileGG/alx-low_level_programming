#include "main.h"

/**
 * infinite_add - add two numbers.
 * @n1: first number.
 * @n2: second number.
 * @r: the buffer.
 * @size_r: the size of r
 * Return: char.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int c = 0;
	int d = 0;

	unsigned int dv;
	unsigned int v1 = 0;
	unsigned int v2 = 0;
	unsigned int v3 = 0;
	char *p = r;

	while (n1[i + 1])
	{
		n1++;
		i++;
	}
	while (i)
	{
		v1 += n1[i] - '0';
		i--;
	}
	while (n2[j + 1])
	{
		n2++;
		j++;
	}
	while (j)
	{
		v2 += n2[j - '0'];
		j--;
	}
	v3 = v1 + v2;
	dv = v3;

	while (dv / 10)
	{
		c += 1;
		dv /= 10;
	}
	c += 1;
	if (c > size_r)
		return (0);
	for (; c; c--)
	{
		d = (v3 % 10);
		v3 = (v3 - d);
		r[c] = d + '0'
	}
	return (p);
}
