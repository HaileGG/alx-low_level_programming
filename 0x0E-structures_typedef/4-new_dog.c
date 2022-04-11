#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * owner: owner of dog.
 * Retrun: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int n1, n2, i;

	for (n1 = 0; name[n1] != '\0'; n1++)
		;
	for (n2 = 0; owner[n2] != '\0'; n2++)
		;
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	nd->name = malloc(sizeof(char) * (n1 + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->owner = malloc(sizeof(char) * (n2 + 1));
	if (nd->owner == NULL)
	{
		free(nd);
		free(nd->name);
		return(NULL);
	}

	for (i = 0; i <= n1; i++)
		nd->name[i] = name[i];

	nd->age = age;

	for (i = 0; i < n2; i++)
		nd->owner[i] = owner[i];

	return (nd);
}
