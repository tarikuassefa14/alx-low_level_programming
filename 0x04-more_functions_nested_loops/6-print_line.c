#include "main.h"

/**
* print_line - function that draws a straight line in the terminal
*
* @n: the number of line
*
* Return: Always 0 (if success)
*/

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
