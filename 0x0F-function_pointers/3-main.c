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
	int (*func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
		exit(98);
	}
	argu1 = atoi(argv[1]);
	argu2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
	exit(99);
	}
	resu = func(a, b);
	printf("%d\n", resu);
	return (0);
}

