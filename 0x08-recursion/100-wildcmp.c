#include "holberton.h"
/**
  * joker - handle wildcard in string
  * @s1: string 1
  * @s2: string 2
  * Return: 1 or 0
  */
int help(char *s1, char *s2);
int joker(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (joker(s1, ++s2));
	}
	else if (*s2 != '*')
	{
		if (*s1 != *s2)
		return (joker(++s1, s2));
	}
	else if (*s1 == *s2)
	return (help(s1, s2));
	return (0);
}
/**
  * help - compare strings
  * @s1: string 1
  * @s2: string 2
  * Return: 1 or 0
  */
int help(char *s1, char *s2)
{
	if (*s1 && *s2)
	{
		if (*s1 == *s2)
			return (help(++s1, ++s2));
		else if (*s2 == '*')
			return (help(s1, ++s2));
		else if (*s1 != *s2 && *s1 != '*')
			return (0);
	}
	return (1);
}
/**
  * wildcmp - compares two strings with wildcards
  * @s1: string 1
  * @s2: string 2
  * Return: 1 or 0
  */
int wildcmp(char *s1, char *s2)
{
	return (help(s1, s2));
}
