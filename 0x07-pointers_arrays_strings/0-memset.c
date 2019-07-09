#include "holberton.h"
/**
  * _memset - Fill memory with a constant byte.
  *
  * @s: Pointer to memory area
  * @b: constant byte
  * @n: number of bytes to fill
  *
  * Return: Pointer to @s memory area.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
