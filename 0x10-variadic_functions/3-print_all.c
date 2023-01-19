#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints float, char, integer, and string
 *
 * @format: format
 */
void print_all(const char * const format, ...)
{
	unsigned int x = 0;
	char *str, *sepr = "";
	va_list argu;

	va_start(argu, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sepr, va_arg(argu, int));
					break;
				case 'i':
					printf("%s%i", sepr, va_arg(argu, int));
					break;
				case 'f':
					printf("%s%f", sepr, va_arg(argu, double));
					break;
				case 's':
					str = va_arg(argu, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepr, str);
					break;
				default:
					x++;
					continue;
			}
			sepr = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(argu);
}
