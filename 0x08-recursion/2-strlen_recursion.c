#include "main.h"

/**
* _strlen_recursion -  function returns the length of a string
*
* @s: String measured
*
* Return: length of a string
*/

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
