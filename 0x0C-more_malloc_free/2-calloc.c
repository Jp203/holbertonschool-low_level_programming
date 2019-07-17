#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The number of elements in the array.
 * @size: The size of the elements.
 * Return: Returns pointer memory of the array. Null if @nmem or @size is 0
 * or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count;
	int *ptr;

	/* Validity Check */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocate memory */
	ptr = malloc(nmemb * size);
	/* NULL Check */
	if (ptr == NULL)
		return (NULL);
	/* Set count to @nmemb value*/
	for (count = 0; count < nmemb; count++)
		/* Set memory of each element i arrray to zero */
		ptr[count] = 0;
	return (ptr);
}
