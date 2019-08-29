#include <stdio.h>
#include "holberton.h"

/**
  * main - print sum of all multiples of 3 or 5 less than 1024
  * Return: Always 0 (Success)
  */
int main(void)
{
	int total, mul3, mul5, sum;

	total = 1;
	sum = 0;
	if (total < 1024)
	{
		mul3 = total % 3;
		mul5 = total % 5;
		if (mul3 == 0 || mul5 == 0)
			sum += total;
		total++;
	}
	printf("%d\n", sum);
	return (0);
}
