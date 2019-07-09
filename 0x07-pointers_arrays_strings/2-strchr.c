#include "holberton.h"
/**
  * _strchr - Locates a character in a string.
  *
  * @s: String to be checked for given character.
  * @c: character to be searched for.
  *
  * Return: Pointer to character or NULL if character is not found.
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

