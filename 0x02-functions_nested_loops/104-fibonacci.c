#include <stdio.h>
/**
  * main - find & print the first 98 fibonacci numbers
  * Return: void
  */
int main(void)
{
	int count = 0;
	unsigned long num1 = 0, num2 = 1, num3;
	unsigned long hold, h1, h2, h3;

	for (count = 1; count <= 91; count++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num1 = num3;
		printf("%lu, ", num3);
	}
	h1 = num1 % 1000;
	num1 = num1 / 1000;
	h2 = num2 % 1000;
	num2 = num2 / 1000;
	while (count <= 98)
	{
		hold = (h1 + h2) / 1000;
		h3 = (h1 + h2) - carry * 1000;
		num3 = (num1 + num2) + carry;
		h1 = h2;
		h2 = h3;
		num1 = num2;
		num2 = num3;
		if (h3 >= 100)
			printf("%lu%lu", num3, h3);
		else
			printf("%lu0%lu", num3, h3);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
