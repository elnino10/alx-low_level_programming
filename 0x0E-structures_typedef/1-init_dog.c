#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr = d;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
