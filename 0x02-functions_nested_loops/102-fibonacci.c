#include "holberton.h"
#include <stdio.h>
/**
 * fibonacci - it shows Fibonacci Series.
 */
int main(void)
{
	int num = 2;
	double i = 1;
	double result = 2;
	
	while (num <= 50)
	{
		if (num == 2)
			printf("1, 2, ");
		else
		{
			result = result + i;
			printf("%g", result);
			i = result - i;
			if (num == 50)
				printf("\n");
			else
			{
				printf(", ");
			}
		}
		num++;
	}
	return (0);
}
