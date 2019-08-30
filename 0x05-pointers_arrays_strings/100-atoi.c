#include "holberton.h"
/**
  * _atoi - convert a string to an integer
  * @s: string to convert
  * Return: integer converted, 0 if string empty of numbers
  */
int _atoi(char *s)
{
	unsigned int result;
	int line;

	line = 1;
	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-')
			line *= -1;
		s++;
	}

	for (result = 0; *s != '\0' && *s >= '0' && *s <= '9'; s++)
	{
		result = result * 10 + (*s - '0');
	}
	return (result * line);
}
