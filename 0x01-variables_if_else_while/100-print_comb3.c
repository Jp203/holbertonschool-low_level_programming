#include <stdio.h>
/**
  * main - prints all combinations of 2 digits
  *      - only smallest combo, in asceding order
  *      - 01 and 10 are regarded as the same
  *      - no char types
  * Return: Always 0
  */
int main(void)
{
	int num1, num2;

	num1 = '0';
	num2 = num1 + 1;
	
	for (;num2 <= '9';)
	{
		if (num1 == '0' && num2 == '1')
			;
		else
		{
			putchar(',');
			putchar(' ');
		}
		putchar(num1);
		putchar(num2++);
		if (num2 > '9')
		{
			num1++;
			num2 = num1 + 1;
		}
	}
	putchar('\n');
	return (0);
}
