#include "holberton.h"

/**
  * times_table - print the times table of 9
  *
  * Return: Always 0 (Success)
  */
void times_table(void)
{
	int input, across, num1, num2, i;

	across = 0;
	input = across;

	while (across < 10)
	{
		i = 0;
		while (i < 10)
		{
			num1 = ((input / 10) % 10) + '0';
			num2 = (input % 10) + '0';
			if (i != 0)
			{
				if (input < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if (input > 9)
				_putchar(num1);
			_putchar(num2);
			if (i != 9)
				_putchar(',');
			i++;
			input += across;
		}
		_putchar('\n');
		input = 0;
		across++;
	}
}
