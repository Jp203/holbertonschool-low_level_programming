#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Struct w/ dog bio info.
  * @name: Name of dog.
  * @age: Age of dog.
  * @owner: Name of owner.
  *
  * Description: Struct comprised of dog name, age, & owner.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
