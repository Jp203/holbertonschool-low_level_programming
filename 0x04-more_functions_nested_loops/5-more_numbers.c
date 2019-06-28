#include "holberton.h"
/**
  * more_numbers - Print 0-14 ten times.
  *
  * Return: Always 0.
  */
void more_numbers(void)
{
	int j, p;

	for (j = 0; j < 10; j++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p > 9)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
