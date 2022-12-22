#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: integer
 *
 * Return: Null
 */

void print_number(int n)
{
	unsigned int inte = n;

	if (n < 0)
	{
		_putchar('-');
		inte = -inte;
	}
	if ((inte / 10) > 0)
		print_number(inte / 10);

	_putchar(inte % 10 + '0');
}
