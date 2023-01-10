#include "main.h"
#include <stdio.h>

/**
 * main - program for multiplying two numbers.
 * @argc: array length
 * @argv: arguments of arry
 * Return: Always 0 (if success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
