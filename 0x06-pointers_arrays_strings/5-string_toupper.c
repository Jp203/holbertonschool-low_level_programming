#include "holberton.h"
/**
  * string_toupper - Convert string lowercase letters to uppercase.
  *
  * @c: A pointer of the string to convert.
  *
  * Return: The string that was converted.
  */
char *string_toupper(char *c)
{
	int j;

	j = 0;

	while (c[j] != '\0')
	{
		if (c[j] >= 'a' && c[j] <= 'z')
		{
			c[j] -= 'a' - 'A';
			j++;
		}
	}
	return (c);
}

