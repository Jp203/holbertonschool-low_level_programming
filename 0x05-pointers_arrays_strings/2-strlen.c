#include "holberton.h"
/**
  * _strlen - Return length of  a string.
  *
  * @s: The string to determine length of.
  *
  * Return: Always 0
  */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

