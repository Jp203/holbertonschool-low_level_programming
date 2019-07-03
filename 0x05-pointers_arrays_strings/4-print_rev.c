#include "holberton.h"
/**
  * print_rev - Prints a given string in reverse.
  *
  * @s: The string to be printed.
  *
  * Return - Always 0.
  */
void print_rev(char *s)
{
	int j;

	while (*s != '\0')
	{
		s++;
		j++;
	}
	while (j > 0)
	{
		j--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
