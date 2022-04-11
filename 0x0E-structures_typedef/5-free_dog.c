#include <stdio.h>
#include "dog.h"

/**
 * free_dog - initializes a variable of type struct dog.
 * @d: dog's details.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
