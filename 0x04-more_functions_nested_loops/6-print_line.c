#include "holberton.h"
/**
  * print_line - Print a line.
  *
  *@n: Determines length of the line
  *
  */
void print_line(int n)
{
	int j, p;

	p = n;

	if (p < 0)
	{	p = 0;
	}

	for (j = 0; j < p; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

