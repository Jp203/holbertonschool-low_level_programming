#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array of integers
 * @a: array of ints
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%i", a[count]);
		if (count != n - 1)
			printf(", ");
	}
	printf("\n");
}
