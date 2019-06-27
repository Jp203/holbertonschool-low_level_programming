#include "holberton.h"
#include <stdio.h>
/**
  *
  * _isdigit - Check for digit from 0-9.
  *
  * @c: to be checked.
  *
  * Return:1 if c is a digit, 0 otherwise.
  *
  */

int _isdigit(int c)
{
	int stat;
	stat = 0;
	
	/* Checking ASCII value of c */
	if (c >=48 && c < 58)
	{
		stat = 1;
	}
	return (stat);
}
