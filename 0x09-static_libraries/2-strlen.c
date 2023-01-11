#include "main.h"

/**
* _strlen -  function that returns the length of a string
*
* @s: Count of string
*
* Return: The length of string
*/

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
