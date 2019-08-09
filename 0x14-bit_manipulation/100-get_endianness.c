#include "holberton.h"

/**
  * get_endianness - checks the endianness
  * Return: 1 for little endian, 0 for big endian
  */
int get_endianness(void)
{
	short int value;
	char *track;
	int num_check;

	value = 1;
	num_check = 4;
	track = (char *)&value;
	while (num_check--)
	{
		if (*track == 1)
			return (1);
	}
	return (0);
}
