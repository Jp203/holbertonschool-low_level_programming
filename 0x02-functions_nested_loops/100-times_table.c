#include "holberton.h"
/**
  * print_times_table - prints times table of any number
  * @n: number to print times table of
  * Return: void
  */
void print_times_table(int n)
{
	int across, down, input, num1, num2, num3;
	

	if  (!(n > 15 || n < 0))
	{
		across = 0;
		while (across <= n)
		{
			down = 0;
			input = 0;
			while (down <= n)
			{
				if (down != 0)
				{
					if (input < 100)
						_putchar(' ');
					if (input < 10)
						_putchar(' ');
					_putchar(' ');
				}
				num1 = ((input / 100) % 10) + '0';
				num2 = ((input / 10) % 10) + '0';
				num3 = (input % 10) + '0';
				if (input > 99)
					_putchar(num1);
				if (input > 9)
					_putchar(num2);
				_putchar(num3);
				if (down != n)
					_putchar(',');
				input += across;
				down++;
			}
			_putchar('\n');
			across++;
		}
	}
}



