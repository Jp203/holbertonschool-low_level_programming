#include "holberton.h"

/**
  *
  * print_last_digit - Print the last digit of a given number
  *@j: the given number
  *Return: last digit of number
  *
  */

int print_last_digit(int j)
{
	if (j < 0)
		j = j * -1;
	_putchar((j % 10) + '0');
	return (j % 10);
}
