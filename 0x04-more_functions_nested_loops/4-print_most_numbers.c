#include "holberton.h"

/**
 * print_most_numbers - Print numbers 0-9 excluding 2 & 4.
 *
 * Return: Always 0
 *
 */

void print_most_numbers(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (j != 50 && j != 52)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}



