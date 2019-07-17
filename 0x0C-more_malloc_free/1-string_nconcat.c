#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - Concatenates 2 strings.
  * @s1: String 1.
  * @s2: String 2.
  * @n: First number of bytes of s2 to use.
  * Return: Pointer to allocated memory.NULL if fail
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int count1 = 0, count2 = 0, count3;

	/* If NULL treat as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Count string lengths to NULL byte */
	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	/* Check n value, if @count2 less than @n use whole @s2 string */
	if (n < count2)
		count2 = n;
	/* Allocate Memory */
	ptr = malloc((count1 + count2 + 1) * sizeof(char));
	/* NULL Check */
	if (ptr == NULL)
		return (NULL);
	/* Set pointer to @s1 length */
	for (count3 = 0; count3 < count1; count3++)
		ptr[count3] = s1[count3];
	count1 = count3;
	/* Set pointer to final length needed */
	for (count3 = 0; count3 < count2; count3++, count1++)
		ptr[count1] = s2[count3];
	/* Null terminator */
	ptr[count1] = '\0';
	return (ptr);
}
