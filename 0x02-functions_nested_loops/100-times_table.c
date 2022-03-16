#include "main.h"

/**
 * print_times_table - prints the time table for n.
 * @n: The multiplication table requested.
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int i, j, r;

	if (!(n >15) || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (r < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((r % 10) + '0');
				}
				else if (r >= 10 && r < 100)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r >= 100 && j != 0)
				{
					_putchar((r / 100) + '0');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
					_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
