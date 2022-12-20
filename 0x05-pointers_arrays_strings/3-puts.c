#include "main.h"

/**
* _puts - prints a string backwards, then adds a new line after it.
*
* @str: String
*
* Return: Null
*/

void _puts(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
