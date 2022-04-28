#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0.
 */
int get_endianness(void)
{	
	unsigned int num = 1;
	char *endn =(char *)&num;

	if (*endn == 1)
	{
		return (1);
	}
	return (0);
}
