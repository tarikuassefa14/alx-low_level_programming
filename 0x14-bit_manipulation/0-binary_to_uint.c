#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - a binary number to unsigned integer
 *
 * @b: number of the binary 
 *
 * Return: converted of integier
 */

unsigned int binary_to_uint(const char *b)
{
	int x; 
	unsigned int decimal_y = 0;

	if (!b)
		return (0);

	for (x = 0; b[i]; i++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal_y = 2 * decimal_y + (b[x] - '0');
	}

	return (decimal_y);
}
