#include <stdio.h>

/**
  * main - print first 98 fibonacci numbers
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int count = 2;
	unsigned long sum, sum1, sum2,num1, num2;
	unsigned long power, f1, f2, s1, s2;

	num1 = 1;
	num2 = count;
	power = 100000000;
	sum = num1 + num2;
	printf("%lu, %lu, ", num1, num2);
	while (sum < power)
	{
		sum = num2 + num1;
		printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
		count++;
	}
		f1 = num1 / power;
		f2 = num1 % power;
		s1 = num2 / power;
		s2 = num2 % power;
	while (count < 98)
	{
		sum2 = f2 + s2;
		sum1 = f1 + s1 + (sum2 / power);
		sum2 = sum2 % power;
		if (count == 97)
			break;
		if (sum2 <= (power / 10))
			printf("%lu%08lu, ", sum1, sum2);
		else
			printf("%lu%lu, ", sum1, sum2);
		f1 = s2;
		f2 = s2;
		s2 = sum1;
		s2 = sum2;
		count++;
	}
	printf("%lu%lu\n", sum1, sum2);
	return (0);
}
