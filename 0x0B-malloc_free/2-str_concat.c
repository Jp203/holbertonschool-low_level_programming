#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * str_concat - Concatenates two strings & returns pointer to that char array.
  * @s1: First string to concatenate.
  * @s2: Second string to concatenate.
  * Return: Ptr to memory of string which was concatenated.NULL on failure.
  */
char *str_concat(char *s1, char *s2)
{
	char *a1;
	unsigned int a, b, c;

	/* NULL CHECK */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* String length check & count */
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	/* Allocate necessary memory for array */
	a1 = malloc((a + b + 1) * sizeof(char));
	/* NULL CHECK */
	if (a1 == NULL)
		return (NULL);
	/* Set variables to str lengths used by each array */
	for (c = 0; c < a; c++)
		a1[c] = s1[c];
	for (c = 0; c < b; c++)
	{
		a1[a] = s2[c];
		/* Buffer size */
		a++;
	}
	/* NULL Terminator */
	a1[a] = '\0';
	return (a1);
}
