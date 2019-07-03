#include "holberton.h"
/**
  * puts2 - Print every other character of a string.
  *
  * @str: String to be printed.
  *
  * Return: Void.
  */
void puts2(char *str)
{
	int j, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < length; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
