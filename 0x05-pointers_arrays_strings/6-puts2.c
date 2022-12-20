#include "main.h"

/**
* puts2 - starts with the first character of a string every other character
*
* @str: String
*
* Return: Null
*/

void puts2(char *str)
{
	int c = 0;

	for (str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
		c++;
	}
	_putchar('\n');
}
