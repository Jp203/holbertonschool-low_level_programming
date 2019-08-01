#include "variadic_functions.h"
/**
 * print_numbers - prints numbers 
 * @separator: seperates each number of string
 * @n: number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && count < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
