#include "main.h"

/**
 * _atoi - string-to-integer conversion function
 *
 * @s: The string
 *
 * Return: The integer value
 */

int _atoi(char *s)
{

	unsigned int number = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;

	} while (*s++);

	return (number * sign);
}
