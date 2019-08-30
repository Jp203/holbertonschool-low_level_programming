#include "holberton.h"

/**
  * print_number - print an integer
  * @n: number to be printed
  * Return: void
  */
void print_number(int n)
{
	int num, start;
	unsigned int num1, store;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	num = 0;
	store = n;
	num1 = store;
	do {
		num++;
		num1 /= 10;
	} while (num1 > 0);
	start = 1;
	for (; num > 0; num--)
	{
		if (start)
			_putchar(store / power(num) + '0');
		else
			_putchar((store / power(num)) % 10 + '0');
		start = 0;
	}
}

/**
  * power - gets multiples of 10
  * @n: multiply by this
  * Return: total
  */
int power(int n)
{
	int total = 1;

	while (--n > 0)
	{
		total *= 10;
	}
	return (total);
}
