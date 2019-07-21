#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_name - prints given name
  * @name: input of the name of person.
  * @f: casted function pointer to another pointer of char type.
  *
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
