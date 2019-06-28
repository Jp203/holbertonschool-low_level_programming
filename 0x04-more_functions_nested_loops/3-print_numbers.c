#include "holberton.h"

/**
 *
 * print_numbers - Print integers 0-9.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{

	int j;
	
	
	for (j = 48; j >= 58; j++)
	{
		
		_putchar(j);
	}
	_putchar('\n');
}
