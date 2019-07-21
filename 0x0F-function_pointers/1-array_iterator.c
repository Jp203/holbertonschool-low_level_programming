#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: array to iterate through.
 * @size: sizeof array.
 * @action: function to be executed.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	/* Check */
	if (array && action)
		/* Iterate through length */
		for (i = 0; i < (int)size; i++)
			/* Call to function */
			action(array[i]);
}
