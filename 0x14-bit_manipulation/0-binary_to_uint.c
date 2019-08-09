#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1's
 * Return: converted number, 0 if invalid input or @b null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int power, current, val;

	if (b == NULL)
		return (0);
	/* set first index to be last */
	current = 0;
	while (b[current] != '\0')
		current++;
	/* traverse binary string and add to sum */
	current = current - 1;
	power = 0;
	uint = 0;
	while (current >= 0)
	{
		val = b[current];
		if (val == 48)
		{
			power++;
			current--;
		}
		else if (val == 49)
		{
			uint = uint + (1 << power);
			power++;
			current--;
		}
		else
			return (0);
	}
	return (uint);
}
