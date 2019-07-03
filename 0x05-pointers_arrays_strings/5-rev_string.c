#include "holberton.h"
/**
  * rev_string - Reverses a string.
  *
  * @s: String to be reversed.
  *
  * Return: Void
  */
void rev_string(char *s)
{
	int a = 0, b = 0;

	char tmp1, tmp2;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		tmp1 = s[b];
		tmp2 = s[a - 1];
		s[b] = tmp2;
		s[a - 1] = tmp1;
		a--;
	}
}

