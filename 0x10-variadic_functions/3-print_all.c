#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print anything
 * @format: for the output
 */
void print_all(const char * const format, ...)
{
	int count = 0, format_ok;
	char *text;
	va_list va;

	va_start(va, format);
	while (format && format[count] != '\0')
	{
		format_ok = 1;
		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(va, int));
				break;
			case 'i':
				printf("%i", va_arg(va, int));
				break;
			case 'f':
				printf("%f", va_arg(va, double));
				break;
			case 's':
				text = va_arg(va, char *);
				if (text)
				{
					printf("%s", text);
					break;
				}
				printf("(nil)");
				break;
			default:
				format_ok = 0;
				break;
		}
		if (format[count + 1] != '\0' && format_ok == 1)
			printf(", ");
		count++;
	}
	printf("\n");
	va_end(va);
}
