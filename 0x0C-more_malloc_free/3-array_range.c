#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: the first value of array.
 * @max: the last value of array.
 *
 * Return: min.
 */
int *array_range(int min,int  max)
{
	int *ar, in, sz;

	if (min > max)
		return (NULL);

	sz = (max - min) + 1;

	ar = malloc(sizeof(int) * sz);

	if (ar == NULL)
		return (NULL);

	for (in = 0; in < sz; in++)
		ar[in] = min++;

	return (ar);
	/**
	int *ar, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
	**/
}
