#include <stdio.h>
/**
  * main - Print the name of the file which it was compiled from.
  * @void: Nothing passed.
  * Return: 0 on success.
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
