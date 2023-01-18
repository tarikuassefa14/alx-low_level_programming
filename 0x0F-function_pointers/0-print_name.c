#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints name
 *
 * @name: printed name
 * @f:the function that pointer to the printing
 *
 * Return: Null
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

