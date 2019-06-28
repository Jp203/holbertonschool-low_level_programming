#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase character.
 *
 * @c: int to be checked.
 *
 * Return: 1 when c is uppercase or 0 otherwise.
 *
 */

int _isupper(int c)
{
	int stat;

	stat = 0;

	if (c >= 65 && c < 91)
	{
		stat = 1;
	}
	return (stat);
}
