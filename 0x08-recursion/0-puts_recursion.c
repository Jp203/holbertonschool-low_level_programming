#include "holberton.h"
/**
  * _puts_recursion - Prints a string that is followed by a new line.
  *
  * @s: THe string that will be printed.
  *
  */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}