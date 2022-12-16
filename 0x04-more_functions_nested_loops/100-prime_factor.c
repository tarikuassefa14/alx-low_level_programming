#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (if sucess)
 */

int main(void)

{
	long n, x;

	n = 612852475143;

	for (x = 2; x < n; x++)
	{

	while (n % x == 0)
	n = n / x;

	}

	printf("%lu\n", n);

	return (0);
}
