#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocations a memmory block using malloc.
 * @str: A pointer to the memmory.
 * @old_size: The size in bytes.
 * @new_size: The size in bytes.
 *
 * Return: new_size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *ptr_c, *f;
	unsigned int in;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_c = ptr;
	m = malloc(sizeof(*ptr_c) * new_size);

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = m;
	for (in = 0; in < old_size && in < new_size; in++)
		f[in] = *ptr_c;

	free(ptr);
	return (m);
}
