#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 *
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > c)
		largest = a;
	else
		largest = c;
}
else if (b > a)
{
	if (b > c)
		largest = b;
	else 
		largest = c;
}
else if (a > c)
{
	largest = a;
}
else 
{
	largest  = c;
}
return (0);
}
