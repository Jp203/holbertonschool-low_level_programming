#include "holberton.h"
#include <stdio.h>
/**
  * prime_check - Finds the multipliers of @n.
  *
  * @n: Base number to check against.
  * @a: Number to iterate.
  *
  * Return: 1 if @n is prime, 0 otherwise.
  */
int prime_check(int n, int a)
{
	if (a == n)
		return (1);
	if (n % a == 0)
		return (0);
	else
		return (prime_check(n, a + 1));
}
/**
  * is_prime_number - Determines if @n is a prime number.
  *
  * @n: Given number to check if prime.
  *
  * Return: 1 if @n is a prime number, 0 otherwise.
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_check(n, 2));
}
