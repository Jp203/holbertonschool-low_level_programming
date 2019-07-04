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
	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
