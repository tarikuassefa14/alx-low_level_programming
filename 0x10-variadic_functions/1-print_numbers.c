
#include "variadic_functions.h"

/**
* print_numbers - Prints the numbers by separator
*
* @separator: Separator of string
* @n: quantity
*
* Return: Nothing
**/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va_li;
	int num;
	unsigned int x;

	va_start(va_li, n);
	for (x = 0; x < n; x++)
	{
		num = va_arg(va_li, int);
		printf("%d", num);
		if (separator && x  < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(va_li);
}
