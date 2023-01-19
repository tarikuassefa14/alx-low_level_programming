#include "variadic_functions.h"

/**
 * sum_them_all - The sum of all parameters
 *
 * @n: total of the parameters
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list argu;

	va_start(argu, n);

	for (x = 0; x < n; x++)
		sum += va_arg(argu, int);

	va_end(argu);

	return (sum);
}
