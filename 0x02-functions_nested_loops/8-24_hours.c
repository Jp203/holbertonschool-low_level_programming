#include "holberton.h"

/**
  *
  * jack_bauer - print time of day 
  * Return: end time
  *
  */
void jack_bauer(void)
{
	int hrs, mins, h1, h2, m1, m2;

	mins = 0;

	hrs = mins;

	while (hrs < 24)
	{
		h1 = ((hrs / 10) % 10) + '0';
		h2 = (hrs % 10) + '0';
		m1 = ((mins / 10) % 10) + '0';
		mi2 = (mins % 10) + '0';
		_putchar(h1);
		_putchar(h2);
		_putchar(':');
		_putchar(m1);
		_putchar(m2);
		_putchar('\n');
		mins++;

		if (mins == 60)
		{
			hrs++;
			mins = 0;
		}
	}
}
