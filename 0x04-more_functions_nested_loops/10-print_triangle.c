#include "main.h"

/**
 * print_triangle - prints the triangle line
 *
 * @size: Size of triangle.
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = ; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if (y <= size - x)
				{
					_putchar(' ');
				}
				else 
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
