#include "variadic_functions.h"
/**
 * print_all - print anything passed
 * @format: types argument passed
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	char *hold;
	int count = 0, types;

	while (format && format[count])
	{
		va_start(valist, format);
		while (format[count])
		{
			types = 1;
			switch (format[count++])
			{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				temp_s = va_arg(valist, char*);
				if (hold)
				{
					printf("%s", hold);
					break;
				}
				printf("(nil)");
				break;
			default:
				types = 0;
				break;
			}
			if (format[count] && types)
				printf(", ");
		}
		va_end(valist);
	}
	printf("\n");
}
