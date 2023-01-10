#include "main.h"
#include <stdio.h>

/**
 * main - a program that outputs every argument it receives
 * @argc: array length
 * @argv: arguments of arry
 * Return: Always 0 (if success)
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
