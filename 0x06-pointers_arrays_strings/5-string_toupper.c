#include "holberton.h"
/**
  * string_toupper - Convert string lowercase letters to uppercase.
  *
  * @c: A pointer to the string to convert.
  *
  * Return: The string that was converted.
  */
char *string_toupper(char *c)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
		if ((c[j] >= 97) && c[j] <= 122)
			c[j] -= 32;
	return (c);
}
