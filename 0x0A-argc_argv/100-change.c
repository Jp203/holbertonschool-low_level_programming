#include <stdio.h>
#include <stdlib.h>
/**
  * main - Print minimum number of coins to make change.
  * @argc: Count of arguments passed.
  * @argv: Argument vectors passed.
  * Return: 0 on success, 1 on error.
  */
int main(int argc, char *argv[])
{
	int coins;
	unsigned int amount;

	coins = 0;
	amount = 0;

	/* Ensures only 2 arguments passed */
	if (argc == 2)
	{
		/* Check for negative number */
		if (argv[1][0] == '-')
			printf("0\n");
		/* Determines the least amount of coins needed */

		amount = atoi(argv[1]);

		for ( ; amount >= 25; coins++, amount -= 25)
			;
		for ( ; amount >= 10; coins++, amount -= 10)
			;
		for ( ; amount >= 5; coins++, amount -= 5)
			;
		for ( ; amount >= 2; coins++, amount -= 2)
			;
		for ( ; amount >= 1; coins++, amount -= 1)
			;
		printf("%d\n", coins);
	}
	else
		printf("Error\n");
	return (0);
}
