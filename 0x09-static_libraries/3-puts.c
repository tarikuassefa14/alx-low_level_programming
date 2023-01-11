#include "main.h"

/**
* _puts - print function that outputs a string and then a new line
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
