#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: THe beginning elements.
 * @max: THe ending elements.
 * Return: Pointer to new array of elements.NULL if min > max or malloc fails.
 */
int *array_range(int min, int max)
{
	int count1, count_range;
	int *ptr;

	/* Validity Check */
	if (min > max)
		return (NULL);
	/* Allocate memory */
	count_range = max - min + 1;
	ptr = malloc(count_range * sizeof(*ptr));
	/* NULL Check */
	if (ptr == NULL)
		return (NULL);
	/* Set ptr to all values, ordered from min to max */
	for (count1 = 0; count1 < count_range; min++, count1++)
		ptr[count1] = min;
	return (ptr);
}
