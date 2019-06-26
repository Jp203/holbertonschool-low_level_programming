include "holberton.h"

/**
  *
  * print_alphabet_x10 - Print the alphabet 10 times
  * Return: 0
  *
  */

void print_alphabet_x10(void)
{
	int j;
	char p;

	for (j = 0; j < 10; ++j)
	{
		for ( p ='a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
