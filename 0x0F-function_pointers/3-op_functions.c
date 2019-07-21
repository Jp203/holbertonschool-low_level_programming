#include "3-calc.h"
/**
  * op_add - adds 2 numbers.
  * @a: first number that will be added.
  * @b: second number that will be added.
  * Return: sum 
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtracts two numbers.
  * @a: first number that will be subtracted.
  * @b: second number that wil be subtracted.
  * Return: difference 
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplies two numbers
  * @a: first number to be multiplied.
  * @b: second number to be multiplied
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - divides two numbers
  * @a: number to be divided.
  * @b: number to divide by.
  * Return: result
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - divides two numbers, returns the remainder
  * @a: number to be divided.
  * @b: number to divide by.
  * Return: remainder
  */
int op_mod(int a, int b)
{
	return (a % b);
}
