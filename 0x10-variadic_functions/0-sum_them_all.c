#include "variadic_functions.h"
/**
 * sum_them_all - adds all parameters together
 * @n: number of arguments
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int count, sum = 0;

	va_start(valist, n);
	for (count = 0; count < n; count++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
