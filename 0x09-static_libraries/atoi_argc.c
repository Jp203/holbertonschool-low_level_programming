#include <stdio.h>
/**
  * main - atoi with argc
  * @argc: count.
  * @argv: vector of args.
  * Return: 0 on success.
  */
int main(int argc, char *argv[])
{
	int j, p;
	
	if (argc > 0)
	{
		for (j = 0; argv != '\0'; j++)
		
		p = atoi(argv[j]);
	}	
		printf("%i\n", argv[p]);
}
