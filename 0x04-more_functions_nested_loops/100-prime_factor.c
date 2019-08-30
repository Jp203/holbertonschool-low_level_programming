#include <stdio.h>
/**
 * main - find and print largest prime factor of 612852475143
 * Return: 0
 */
int main(void)
{
	long count;
	long num_to_prime = 612852475143;

	for (count = 2; count < num_to_prime; count++)
	{
		if (num_to_prime % count == 0)
			num_to_prime /= count;
	}
	printf("%li\n", num_to_prime);
	return (0);
}
