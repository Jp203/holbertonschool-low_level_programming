#include "holberton.h"
/**
  * swap_int - Swap value of two integers.
  * @a: First integer.
  * @b: Second integer.
  * Return: Always 0.
  *
  */
void swap_int(int *a, int *b)
{
	int test;

	test = *a;
	*a = *b;
	*b = test;
}
