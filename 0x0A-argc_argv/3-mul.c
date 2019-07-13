#include <stdio.h>
#include <stdlib.h>
/**
  * main - Multiplies two numbers.
  * @argc: Argument count.
  * @argv: Argument vectors.
  * Return: 0 when successful, 1 with error.
  */
int main(int argc, char *argv[])
{
	int a, b;

	a = b = 0;

	/* Ensures there are only 2 arguments */
	if (argc == 3)
	{
		/* Using atoi to convert numbers stored as chararcters */
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		/* Print result of both numbers */
		printf("%d\n", a * b);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
