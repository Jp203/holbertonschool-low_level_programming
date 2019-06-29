#include "holberton.h"
/**
  * print_square - Print square.
  *
  * @size: Size of square.
  *
  * Return: 0
  */
void print_square(int size)
{
	int j, p, d;

	j = size;

	if (j <= 0)
		j = 0;
	for (p = 0; p < j; p++)
	{
		for (d = 0; d < j; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (p == 0)
		_putchar('\n');
}
