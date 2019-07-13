#include "holberton.h"
#include <stdio.h>
/**
  * main - Print the number of arguments passed into program.
  *
  * @argc: The number of arguments.
  * @argv: The argument vectors.
  *
  * Return: 0 when successful.
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	/* Print value of argc */
	printf("%d\n", argc - 1);
	return (0);
}
