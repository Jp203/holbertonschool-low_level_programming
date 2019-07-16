#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * _strdup - Return a pointer to a duplicate of a string.
  * @str: The string that will be duplicated.
  * Return: Pointer to the duplicate string on success,
  * NULL if memory is insufficient or str = NULL.
  */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int length, i;

	/* Check 1 */
	if (str == NULL)
		return (NULL);
	/* Increment length until end of string */
	for (length = 0; str[length] != '\0'; length++)
		;
	/* Add 1 for null byte */
	length++;
	/* Check 2 */
	if (length < 1)
		return (NULL);
	/* Allocate necessary memory for the array */
	ptr = malloc(length * sizeof(char));
	/* Check 3 */
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Iterate through length to set ptr to str length */
	for (i = 0; i < length; i++)
		ptr[i] = str[i];
	/* Set last vector of array as null byte */
	ptr[i] = '\0';
	return (ptr);
}
