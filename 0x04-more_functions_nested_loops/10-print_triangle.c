#include "main.h"

/**
* print_triangle - function that prints a triangle, followed by a new line
*
* @size: the size of the triangles
*
* Return: Always 0 (if success)
*/

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if ((x + y) <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
