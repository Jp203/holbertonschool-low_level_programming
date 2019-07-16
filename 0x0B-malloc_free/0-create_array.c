#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - Creates a char array & initializes it whith specific char.
  * @size: Size of the array.
  * @c: char to initialize the array.
  * Return: Ptr to array on success, NULL on failure.
  */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size * sizeof(char));
	unsigned int i;

	/* Check for errors */
	if (size == 0 || a == NULL)
		return (NULL);
	/* Iterate through array to get length */
	for (i = 0; i < size; i++)
		/* Set array to char c */
		a[i] = c;
	/* Return pointer to the array */
	return (a);
}
