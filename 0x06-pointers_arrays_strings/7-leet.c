#include "holberton.h"
/**
  * leet - Encode given string into 1337.
  *
  * @s: Pointer to string that will be converted.
  *
  * Return: Pointer to encoded string.
  */
char *leet(char *s)
{
	int j, p;

	char ch[] = "aAeEoOtTlL";

	char leet[] = "43071";

	j = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (p = 0; ch[p] != '\0'; p++)
			if (s[j] == ch[p])
			{
				s[j] = leet[p / 2];
			}
	}
	return (s);
}
