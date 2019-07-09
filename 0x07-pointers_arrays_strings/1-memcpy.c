#include "holberton.h"
/**
  * _memcpy - Copies the memory area.
  *
  * @dest: Memory area that @src will copy to.
  * @src: Memory area to be copied.
  * @n: Number of bytes to copy from memory area.
  *
  * Return: A pointer to @dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}

