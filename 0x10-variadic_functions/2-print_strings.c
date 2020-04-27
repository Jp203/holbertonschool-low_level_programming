#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print separated string arguments
 * @separator: print between each string
 * @n: printed numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
			if (separator)
				(i < n - 1) ? printf("%s%s", str, separator) : printf("%s", str);
			else
				printf("%s", str);
		else
			if (separator)
				(i < n - 1) ? printf("(nil)%s", separator) : printf("(nil)");
			else
				printf("(nil)");
	}
	printf("\n");
	va_end(list);
}
