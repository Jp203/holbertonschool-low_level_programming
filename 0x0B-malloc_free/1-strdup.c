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
	/* Set str length to ptr */
	for (i = 0; i < length; i++)
		ptr[i] = str[i];
	/* NULL byte terminator */
	ptr[i] = '\0';
	return (ptr);
}
