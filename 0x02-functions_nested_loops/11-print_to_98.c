#include <stdio.h>
#include "holberton.h"

/**
  * print_to_98 - prints all numbers from n to 98 w/ newline
  * @n: number to start at for printing
  * Return: void
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	else if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
	}
	printf("%d\n", n);
}
