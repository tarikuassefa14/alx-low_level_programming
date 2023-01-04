#include "main.h"

/**
* _pow_recursion - Yields the value of x magnified by the square of y
*
* @x: The base value
*
* @y: The power
*
* Return: power of the result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
