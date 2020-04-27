#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * strtow - Splits a string into words.
  * @str: The string to be split.
  * Return: Pointer to an array of the split words.
  */
char **strtow(char *str)
{
	int a, b, c;
	char *ptr;

	if ( str == NULL || str == " ")
		return (NULL);
	for (a = 0; str != " "; a++)


