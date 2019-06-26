include "holberton.h"

/**
  *
  * print_sign - Prints whether number is positive, negative, or zero
  * @n: the number that will be checked
  * Return:1 when positive, 0 when zero, -1 when negative
  *
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
