#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - perform the operation asked by the user
*
* @s: Operand given by users
*
* Return: function address operator given as a paramter
**/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x;

	x = 0;
	while (ops[x].op != NULL)
	{
		if (strcmp(s, ops[x].op) == 0)
			break;
		x++;
	}
return (ops[x].f);
}
