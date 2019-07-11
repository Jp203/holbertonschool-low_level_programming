#include "holberton.h"
#include <stdio.h>
/**
  * root_check - Checks given # to @b to find square root.
  *
  * @a: This # will be squared then checked against @b.
  * @b: Number used to check against.
  *
  * Return: Square root of number.
  */
int root_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (root_check(a + 1, b));
}
/**
  * _sqrt_recursion - Determines the natural square root of a number.
  *
  * @n: Number to find the square root of.
  *
  * Return: Square root of given number
  * or -1 if # does not have natural square root.
  */
int _sqrt_recursion(int n)
{
	return (root_check(1, n));
}
