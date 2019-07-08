#include "holberton.h"
/**
  * _strncpy - Copy a string
  *
  * @dest: Destination of string to be copied.
  * @src: String to be copied.
  * @n:The number of bytes to be used when copied
  *
  * Return: A copy of selected string.
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *cpy = dest;

	while (*src != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}

	return (cpy);
}
