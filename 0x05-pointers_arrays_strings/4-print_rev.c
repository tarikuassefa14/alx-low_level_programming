#include "main.h"

/**
* print_rev - prints a string backwards, then adds a new line after it.
*
* @s: the string
*
* Return: Null
*/

void print_rev(char *s)
{
	int c;

	c = 0;

	while (s[c] != 0)
	{
		c++;
	}
	while (c > 0)
	{
		c--;
		_putchar(s[c]);
	}
	_putchar('\n');
}
