#include "dog.h"
/**
 * init_dog - Initialize a structure variable.
 * @d: Pointer to dog struct.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
