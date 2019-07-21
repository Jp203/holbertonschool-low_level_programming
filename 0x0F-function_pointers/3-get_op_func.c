#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * get_op_func - Selects correct math function to perform asked by user.
  * @s: operator argument passed to program.
  * Return: pointer to function selected.NULL if operator not a match.
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (i < 5)
	{
		if (*ops[i].op == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
