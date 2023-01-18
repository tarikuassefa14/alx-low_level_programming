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
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
