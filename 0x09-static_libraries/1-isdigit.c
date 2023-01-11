#include "main.h"

/**
 * _isdigit - checking the for digit or not
 * @c: digit value to check
 *
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
