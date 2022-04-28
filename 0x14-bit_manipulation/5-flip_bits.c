/**
 * File: 5-flip_bits.c
 * Auth: Haile G
 */

#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be flipprd.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The neccessary number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m, bs = 0;

	while (xr > 0)
	{
		bs += (xr & 1);
		xr >>= 1;
	}

	return (bs);
}
