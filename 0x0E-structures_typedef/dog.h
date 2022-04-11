#ifndef _DOG_H_
#define _dog_h_

typedef struct dog dog_t;
/**
 * struct dog - structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner
 *
 * Desc: longer description.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

int _putchar(char c);

void init_dog(struct dog *d, char *anme, float age, char *owner);

void pring_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *woner);

void free_dog(dog_t *d);

#endif /* _dog_h_ */

