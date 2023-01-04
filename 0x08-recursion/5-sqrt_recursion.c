#include "main.h"

/**
 * natural_sqare_root_check - function that calculates a number's natural square root
 *
 * @a: The first nummber
 *
 * @b: The second nummber
 *
 * Return: Square root result
 */

int natural_sqare_root_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (natural_sqare_root_check(a + 1, b));
}

/**
 * _sqrt_recursion - obtain the natural square root of a number
 *
 * @n: integer number 
 *
 * Return: Square root result
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (natural_sqare_root_check(1, n));
}
