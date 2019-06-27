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
	
	/* Printing numbers starting at 0 up to 9 */
	for (j = 0; j <= 9 ; j++)
	{
		/* Using ASCII to increment up from 0 */
		_putchar(j + 48);
	}
	_putchar('\n');
	return (0);
}
