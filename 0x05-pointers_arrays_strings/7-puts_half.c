
#include "main.h"

/**
* puts_half - function that prints a string's first half
*
* @str: the string
*
* Return: Null
*/

void puts_half(char *str)
{
	int x, y, z;

	y = 0;
	while (str[y] != '\0')
	{
		y++;
	}

	if (y % 2 == 0)
	{
		x = y / 2;
		for (z = x; z < y; z++)
			_putchar(str[z]);
	}
	else
	{
		x = (y - 1) / 2;
		for (z = x + 1; z < y; z++)
			_putchar(str[z]);
	}
	_putchar ('\n');
}
