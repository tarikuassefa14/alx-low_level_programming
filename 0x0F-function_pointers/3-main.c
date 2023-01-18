#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main func perform operation
 *
 * @argc: counter the number of arguments
 * @argv: the arguments array
 *
 * Return: 0 (if sucess)
 **/

int main(int argc, char *argv[])
{
	int argu1, argu2, resu;
	int (*f)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
		exit(98);
	}
	argu1 = atoi(argv[1]);
	argu2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
	exit(99);
	}
	resu = f(a, b);
	printf("%d\n", resu);
	return (0);
}

