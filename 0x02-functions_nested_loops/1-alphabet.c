#include "holberton.h"

/**
  * print_alphabet - Print alphabet from a thru z lowercase
  * Return: 0
  */

void print_alphabet(void)
{
	char j;
	for (j = 'a'; j <= 'z'; j++)
		_putchar(j);
	_putchar('\n');
}
