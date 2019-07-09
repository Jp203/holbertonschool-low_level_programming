#include "holberton.h"
/**
  * _strpbrk - Searches a string for any set of bytes.
  *
  * @s: String to be checked.
  * @accept: bytes.
  *
  * Return: Pointer to the byte in @s that matches one a byte in accept
  * or NULL if such a byte is not fouund
  *
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
			s++;
	}
	return (0);
}
