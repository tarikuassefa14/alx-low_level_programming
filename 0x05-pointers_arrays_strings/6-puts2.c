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
	int i = 0;

	for (str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
