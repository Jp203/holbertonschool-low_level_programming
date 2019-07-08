#include "holberton.h"
/**
  * _strcmp - Compare two strings
  *
  * @s1: String that will be compared.
  * @s2: String used to compare by.
  *
  * Return: (s1[i] - s2[i])
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
