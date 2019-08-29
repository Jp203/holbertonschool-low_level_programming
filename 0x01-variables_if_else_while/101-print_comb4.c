#include <stdio.h>
/**
  * main - prints all combinations of 3 digits
  *      - only smallest combo, in asceding order
  *      - no char types
  * Return: Always 0
  */
int main(void)
{
	int num1, num2, num3, sep;

	sep = 0;
	num1 = '0';
	num2 = num1 + 1;
	num3 = num2 + 1;
	
	for (;num1 < '8';)
	{
		if (sep != 0)
		{
			putchar(',');
			putchar(' ');
		}
		
		putchar(num1);
		putchar(num2);
		putchar(num3);
		num3++;
		if (num3 > '9')
		{
			num2++;
			num3 = num1 + 1;

			if (num2 > '8')
			{
				num1++;
				num2 = num1 + 1;
				num3 = num2 + 1;
			}
		}
		sep = 1;
	}
	putchar('\n');
	return (0);
}
