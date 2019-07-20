#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - Free memory allocated by dogs struct.
  * @d: Pointer to dog struct.
  * Return: 0 on Success.
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
