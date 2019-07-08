#include "holberton.h"
/**
  * _strncat - Concatenate two strings.
  * @dest: destination string pointer.
  * @src: source string pointer.
  * @n: number of bytes to be printed.
  * Return: @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, j;

	a = 0;

	for (j = 0; dest[j] != '\0'; j++)
	while (src[a] != '\0' && a < n)
	{
		dest[j + 1] = src[a];
		a++;
	}
	return (dest);
}
