#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array to be iterated through.
 * @size: size of elements in array.
 * @cmp: function used to compare values.
 * Return: index of 1st element found. -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
