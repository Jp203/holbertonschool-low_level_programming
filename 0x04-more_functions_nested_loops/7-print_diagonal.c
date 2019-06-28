#include "holberton.h"
/**
  * print_diagonal - print diagonal line.
  *
  * @n: sets number of times to print.
  *
  * Return: Void.
  */
void print_diagonal(int n)
{
	int alpha, bravo;

	if (n > 0)
	{
		for (alpha = 0; alpha < n; alpha++)
		{
			bravo = 0;
			while (bravo <= alpha)
			{
				if (bravo == alpha)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
				bravo++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


