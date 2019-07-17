#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - Allocates memory. 
  * @b: Argument used to set memory.
  * Return: Pointer to the allocated memory.Exit status of 98 if malloc fails.  
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
