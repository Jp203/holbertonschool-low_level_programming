#include _holberton.h_

/**
  *
  * main - main function
  *
  * Return: 0
  *
  */

int main(void)
{
	/* Sets & makes pointer to Holberton in read-only memory */
	char *j = "Holberton\n";
	int p = 0;

	j = "Holberton\n";

	for (p = 0; p <= 9; p++)
	{
		_putchar(j[p]);
	}
	return(0);
}


