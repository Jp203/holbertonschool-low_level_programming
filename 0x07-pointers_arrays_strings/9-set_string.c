#include "holberton.h"
/**
  * set_string - Sets the value of a pointer to a char.
  *
  * @s: Double pointer that will be set.
  * @to: Char that will be pointed to.
  *
  */
void set_string(char **s, char *to)
{
	*s = to;
}
