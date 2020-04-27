#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _realloc - Reallocates block of memory using malloc & free.
  * @ptr: Pointer to memory allocated by call to > malloc: malloc(old_size).
  * @old_size: Size in bytes of memory for ptr.
  * @new_size: Size of newly created memory block in bytes.
  * Return: 0 on success, NULL if @new_size=0, @ptr !NUll
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int count;
	char *ptr_2;

	/* Check 1 */
	if (new_size == old_size)
		return (ptr);
	/* Check 2 */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* Allocate memory */
	ptr_2 = malloc(new_size);
	/* NULL Check */
	if (ptr_2 == NULL)
		return (NULL);
	/*Count to value of new size ,set memory to zero*/
	for (count = 0; count < new_size; count++)
		*(ptr_2 + (count * new_size)) = 0;
	return (ptr_2);
}
