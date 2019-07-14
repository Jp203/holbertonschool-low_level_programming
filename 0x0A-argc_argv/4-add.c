#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
  * num_check - Will check for valid integer input
  * @argc: Count of passed arguments.
  * @argv: Argument vectors that have been passed.
  * @j: Used to count argv[].
  * @p: Used to count argv[][].
  * Return: 0 on success, 1 on error.
  */
int num_check(int argc, int j, unsigned int p, char *argv[])
{
	/* increment j until it is not less or equal to argc */
	for (j = 1; j <= argc; j++)
		/* increment p until it is equal to length of argv[j] */
		for (p = 0; argv[j] != '\0' && p < strlen(argv[j]); p++)
			/* Check if argv[] has invalid digits */
			if (isdigit(argv[j][p]) == 0)
				return (1);
	return (0);
}
/**
  * main - add all arguments if the are valid digits.
  * @argc: Count of arguments passed.
  * @argv: Argument vectors that have been passed.
  * Return: 0 on success, 1 on error.
  */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	/* Check num_check for error */
	if (num_check(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	/* increment i to get number of vectors in argv */
	for (i = 1; i < argc; i++)
		/* Add all vectors passed to argv */
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
