#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - Creates a char array & initializes it with char c.
  * @size: Size of the array.
  * @c: char to initialize the array.
  * Return: Ptr to array on success, NULL on failure.
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	/* Check 1 - Valid input */
	if (size > 0)
	{
		/* Set ptr array to allocated memory */
		ptr = malloc(size * sizeof(char));
		/* Check 2 - Size of array*/
		if (ptr == NULL)
			return (NULL);
	}
	else
		return (NULL);
	/* Iterate through size to get length of array */
	for (i = 0; i < size; i++)
		/* Set @c to initialize array */
		ptr[i] = c;
	return (ptr);
}
