#include "holberton.h"
/**
  * rot13 - Encodes given string by rotating the characters by 13 spaces.
  *
  * @s: The string that will be checked.
  *
  * Return: Pointer to an encoded string.
  */
char *rot13(char *s)
{
	int j, p;

	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
		for (p = 0; p < 52; p++)
			if (s[j] == a1[p])
				s[j] = b1[p];
	return (s);
}
