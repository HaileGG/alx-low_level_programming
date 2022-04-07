#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array.
 * @memb: The number of elements.
 * @size: The byte size of each elements.
 *
 * Return: size.
 */
void *_calloc(unsigned int memb, unsigned int size)
{
	void *m;
	char *f;
	unsigned int i;

	if (memb == 0 || size == 0)
		return (NULL);

	m = malloc(size * memb);
	if (m == NULL)
		return (NULL);

	f = m;
	for (i = 0; i < (size * memb); i++)
		f[i] = '\0';

	return (m);
}
