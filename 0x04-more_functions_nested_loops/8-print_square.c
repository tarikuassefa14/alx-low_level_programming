#include "main.h"

/**
* print_square - function that prints a square, followed by a new line
*
* @n: the size of square
*
* Return: Always 0 (if success)
*/

void print_square(int n)
{
	int x, x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
