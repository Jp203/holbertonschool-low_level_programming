#include "holberton.h"

/**
  *
  * print_alphabet_x10 - Print the alphabet 10 times
  * Return: 0
  *
  */

void print_alphabet_x10(void)
{
	int j, o;
	char *n;

	for (j = 1; j <= 10; j++)
	{
		n = "abcdefghijklmnopqrstuvwxyz"

		for ( o = 0; o <= 26; o++)
		{
			_putchar(n[o]);
		}
	}
}
