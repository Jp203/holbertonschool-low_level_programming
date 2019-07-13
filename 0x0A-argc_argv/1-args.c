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
int main(int argc, char *argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
