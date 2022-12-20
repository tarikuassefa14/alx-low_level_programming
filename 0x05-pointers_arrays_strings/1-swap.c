#include "main.h"

/**
 * swap_int - a swap function two integers from two value
 *
 * @a: The first integer
 *
 * @b: The second integer
 *
 * Return: Always 0 9if success)
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
