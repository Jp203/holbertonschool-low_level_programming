
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - Create a new dog for structure.
 * @d: Pointer of to dog struct.
 * @name: Nameof dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
