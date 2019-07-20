#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints dog bio struct.
 * @d: Pointer to dog struct.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
