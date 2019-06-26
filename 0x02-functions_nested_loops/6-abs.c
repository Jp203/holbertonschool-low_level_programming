#include "holberton.h"

/**
  *
  * _abs - Compute absolute value of an integer
  * @j: integer 
  * Return: absolute value of @j
  *
  */

int _abs(int j)
{
	if (j < 0)
		j = j * -1;
	return (j);
}
		
