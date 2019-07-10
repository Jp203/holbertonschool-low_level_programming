#include "holberton.h"
/**
  * _pow_recursion - Determines value of an int raised by another int.
  *
  * @x: number to be raised by power of @y.
  * @y: number used to to raise @x.
  *
  * Return: Value of @x raised by @y, or -1 if @y is less than 0.
  *
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y <= 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
