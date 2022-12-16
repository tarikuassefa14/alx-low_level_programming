#include "main.h"

/**
* print_most_numbers - print the number that 0 - 9 not 2&4
*
* Return: Always 0 (if sucsess)
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
