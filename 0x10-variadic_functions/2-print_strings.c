#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - using separator print strings
 *
 * @separator: the string separator
 * @n: strings number
 *
 * Return: Nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int x = 0;
	char *p;

	va_start(argu, n);
	for (; x < n; x++)
	{
		p = va_arg(argu, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argu);
}
