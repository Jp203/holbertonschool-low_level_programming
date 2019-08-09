#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int index_a;

	mask = 1;
	index_a = 0;
	while (mask < 2147483648)
	{
		if (index_a == index)
		{
			if ((mask & n) == 0)
				return (0);
			else
				return (1);
		}
		index_a++;
		mask = mask << 1;
	}
	return (-1);
}
