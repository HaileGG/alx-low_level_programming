#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints the points
 * @x: Variable
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf(' ');
		}
		if (x != 100)
		{
			_putchar(' ');
		}
	}
	_putchar(\n'');
	return (0);
}
