#include "holberton.h"

/**
  *
  * _islower - Decipher whether or not a character is a lowercase letter from the alphabet
  * @c: character to be tested
  * Return: 1 if c is lowercase, 0 otherwise
  *
  */

int _islower(int c)
{
	if (c >= 'a' && c<= 'z')
		return (1);
	else
		return (0);
}
