#include "holberton.h"
/**
  * cap_string - Capitolize all words of a given string.
  *
  * @s: A pointer to the string that will be converted.
  *
  * Return: Pointer of capitalized string.
  */
char *cap_string(char *s)
{
	int j, p;

	char sep[] = " \t\n,;.!?\"(){}";

	j = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}

	while (s[j] != '\0')
	{
		for (p = 0; sep[p] != '\0'; p++)
			if (s[j - 1] == sep[p] && (s[j] >= 'a' && s[j] <= 'z'))
			{
				s[j] -= ('a' - 'A');
				j++;
			}
	}
		return (s);
}
