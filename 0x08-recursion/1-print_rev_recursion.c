#include "main.h"

/**
* _print_rev_recursion - function that reverse-prints a string
*
* @s: The reversed string
*
* Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
