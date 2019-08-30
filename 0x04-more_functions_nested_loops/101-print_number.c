#include "holberton.h"
/**
 * print_number - print a number
 * @n: given number
 */

void print_number(int n)
{
	long count, length = 1, hold, store, x;

	hold = n;
	x = length;

	if (hold < 0)
	{
		hold *= -1;
		_putchar('-');
	}
	store = hold;
	while (store >= 10)
	{
		length++;
		hold /= 10;
	}
	for (count = 1; count < len; count++)
		x *= 10;
	while (x > 1)
	{
		_putchar((hold / x % 10 + '0');
		x /= 10;
	}
	_putchar(res % 10 + '0');
}
