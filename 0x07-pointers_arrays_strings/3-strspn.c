#include "holberton.h"
/**
  * _strspn - Determines length of a prefix substring.
  *
  * @s: String to be checked.
  * @accept: bytes.
  *
  * Return: Number of bytes which derive from @accept.
  */
unsigned int _strspn(char *s, char *accept)
{
	int j, p;

	j = 0;

	while (s[j] != '\0')
	{
		p = 0;
		while (accept[j] != '\0' && s[j] != accept[p])
			p++;
		if (accept[p] == '\0')
			return (j);
		j++;
	}
	return (j);
}
