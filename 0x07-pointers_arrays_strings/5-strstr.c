#include "holberton.h"
/**
  * _strncmp - Compare two strings.
  *
  * @s1: String that will be checked.
  * @s2: String used to do the checking.
  * @b: The number of bytes that will be checked.
  *
  * Return: 0 when the strings are identical, any other if not.
  *
  */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int j;

	for (j = 0; j <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; j++)
	{
		s1++;
		s2++;
	}
	return (j - b);
}
/**
  * _strstr - Locates a substring
  *
  * @haystack: String that will be looked through.
  * @needle: Substring to be found.
  *
  * Return: Pointer to the substring found.
  *
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length;

	length = 0;

	while (needle[length] != '\0')
		length++;

	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, length) == 0)
			return (haystack);
		haystack++;
	}
	return (0);
}
