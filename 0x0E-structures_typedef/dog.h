#ifndef _DOG_H_
#define _dog_h_

/**
 * dog_t - typedef for dog strucure
 */
typedef struct dog dog_t;
/**
 * struct dog - structure.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void pring_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _dog_h_ */
