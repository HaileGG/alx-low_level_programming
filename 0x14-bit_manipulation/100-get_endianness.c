/**
 * File: 100-get_endianness.c
 * Auth: Haile G
 */

#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0.
 */
int get_endianness(void)
{
	int num = 1;
	char *endn =(char *)&num;

	if (*endn == 1)
		return (1);

	return (0);
}
