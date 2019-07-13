#include <stdio.h>
/**
  * main - Print all arguments recieved.
  * @argc: Count of arguments.
  * @argv: Argument vectors.
  * Return: 0 when successful.
  */
int main(int argc, char *argv[])
{
	int count;
	
	/* Loop to count thru argc value */
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
