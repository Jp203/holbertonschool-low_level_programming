#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - Print sum of two diagonals of square matrix of integers.
  *
  * @a: Pointer to the 2d array.
  * @size: determines which diagonals to add.
  *
  */
void print_diagsums(int *a, int size)
{
	int j, diag1, diag2;

	diag2 = 0;
	diag1 = diag2;

	for (j = 0; j < (size * size); j += size + 1)
		diag1 += a[j];
	for (j = size - 1; j < (size * size - 1); j += size - 1)
		diag2 += a[j];
	printf("%d, %d\n", diag1, diag2);
}
