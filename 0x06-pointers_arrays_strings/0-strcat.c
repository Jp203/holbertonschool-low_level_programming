#include "holberton.h"
/**
  * _strcat - Concatenate two strings.
  *
  * @src: String to be appended.
  *
  * @dest: String to be added to.
  *
  * Return: @dest.
  */

char *_strcat(char *dest, char *src)
{
	int j, p;

	j = 0;

	for (p = 0; dest[p] != '\0'; p++);

	while(src[j] != '\0')
	{
		dest[p+j] = src[j];
		j++;
	}
	return (dest);
}
