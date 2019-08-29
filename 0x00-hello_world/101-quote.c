#include <unistd.h>
/**
  * main - Prints qoute
  *
  * Return: stat
  */
int main(void)
{
	char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, qoute, sizeof(qoute));
	return (1);
}
