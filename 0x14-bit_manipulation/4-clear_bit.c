#include "holberton.h"

/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the number
 * @index: index to set
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int index_a;

	index_a = 0;
	mask = 1;
	while (mask < 2147483648)
	{
		if (index_a == index)
		{
			*n = *n & ~(1 << index);
			return (1);
		}
		index_a++;
		mask = mask << 1;
	}
	return (-1);
}
