#include "holberton.h"
#include <stdio.h>
/**
  * main - Print 1-100 or Fizz,Buzz, or FizzBuzz.
  *
  * Return: Always 0
  */
int main()
{
	int i,f,b;


	for (i = 1; i <= 100; i++)
	{
		f = ((i % 3) == 0);
		b = ((i % 5) == 0);

		
		if (f && !b)
			printf("Fizz");

		if (b && !f)
			printf("Buzz");
		
		if (f && b)
			printf("FizzBuzz");
		
		if (!f && !b)
			printf("%i", i);
		
		if (i < 100)
			putchar(' ');
		
	}
	printf("\n");
	return(0);
}
				

