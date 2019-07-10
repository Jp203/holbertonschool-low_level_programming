#include "holberton.h"
/**
  * _strlen_recursion - Finds the length of a string.
  *
  * @s: String to determine the length of.
  *
  * Return: The length of given string.
  *
  */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
		return (0);
}
