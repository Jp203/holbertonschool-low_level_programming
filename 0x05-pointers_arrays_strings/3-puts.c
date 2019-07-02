#include "holberton.h"
/**
  * _puts - Print string followed by new line.
  *
  * @str: String to be printed.
  *
  * Return: Always 0.
  *
  */
void _puts(char *str)
{
	int jon;

	jon = 0;
	while (str[jon] != '\0')
	{
		_putchar(str[jon]);
		jon = jon + 1;
	}
	_putchar('\n');
}
