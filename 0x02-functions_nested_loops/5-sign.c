#include "holberton.h"

/**
  *
  * print_sign - Prints whether number is positive, negative, or zero
  * @n: the number that will be checked
  * Return:1 when positive, 0 when zero, -1 when negative
  "*/

int print_sign(int n)
{
	int j;
	char p;

	if (n > 0)
	{
		j = 1;
	 	p = ('+');
	}
	if (n == 0)
	{
		j = 0;
		p = '0';
	}
	else (n < 0)
	{
		j = -1;
		p = '-';
	}
	_putchar(p);
	return (j);
}
