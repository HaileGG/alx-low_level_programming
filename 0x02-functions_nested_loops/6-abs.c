#include "main.h"

/**
 * _abs - calculate the absolute value os the number from zero.
 * @i: the integer to be checked.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}

	return (i);
}
