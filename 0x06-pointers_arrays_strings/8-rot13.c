#include "holberton.h"
/**
  * rot13 - Encodes given string by rotating the characters by 13 spaces.
  *
  * @s: Pointer to string to be encoded.
  *
  * Return: Encoded string.
  */
char *rot13(char *s)
{
	int j, p;

	char rot[] = "NOQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char boo;

	for (j = 0; s[j] != '\0'; j++)
	{
		boo = 0;

		for (j = 0; s[j] != '\0' && boo == 0; p++)
		{
			if (s[j] == alphabet[j])
			{
				s[j] = rot[j];
				boo = 1;
			}
		}
	}
	return (s);
}
