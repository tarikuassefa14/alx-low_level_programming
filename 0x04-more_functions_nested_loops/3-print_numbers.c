#include "main.h"

/**
* print_numbers - print the number from 0 - 9.
*
* Return: Always 0 (if success)
*/

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
