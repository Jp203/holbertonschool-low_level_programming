#include "holberton.h"
/**
  * factorial - Determines the factorial of a given number.
  *
  * @n: The number to determine the factorial of.
  *
  * Return: The factorial of given number.
  *
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
