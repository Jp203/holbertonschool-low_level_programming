#include <stdio.h>
/**
  * main - find sum of even valued terms
  * Return: void
  */
int main(void)
{
	unsigned long sum = 0, count, num1, num2 = 1, num3;

	num1 = sum;

	for (count = 0; count < 50; count++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num3 % 2 == 0 && num3 < 4000000)
		{
			sum += num3;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
