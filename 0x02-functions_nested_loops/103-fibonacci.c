#include <stdio.h>

/**
 * main - sum even fibonacci numbers under 4 million
 * Return: Nothing.
 */
int main(void)
{
	unsigned long c, i, j, k, s;

	i = s = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			s += k;
		}
	}
	printf("%lu\n", s);
	return (0);
}
