#include "main.h"

/**
* print_number - function that prints an integer number
* @n: integer
*
* Return: Always 0 (if success)
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar(45);
		num = -num;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
