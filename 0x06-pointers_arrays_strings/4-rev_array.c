#include "holberton.h"
/**
  * reverse_array - Reverse the contents of an integer array.
  *
  * @a: The array that will be reversed.
  * @n: The size of the elements inside the array.
  *
  * Return: Void
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	tmp = 0;
	n -= 1;

	while (i < n)
	{
		tmp = a[n];
		a[n--] = a[i];
		a[i++] = tmp;
	}
}
