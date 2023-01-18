#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - claculate two integers
*
* @a: first integer
* @b: second integer
*
* Return: sum of a + b
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - claculate the diff of two int
*
* @a: first integer
* @b: second integer
*
* Return: diff a - b
**/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - calculate product of two integer
*
* @a: first integer
* @b: second integer
*
* Return: product of a * b
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - calculate division of two integer
*
* @a: first integer
* @b: second integer
*
* Return: division of a / @
**/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - calculate reminder of division of two integers
*
* @a: first integer
* @b: second integer
*
* Return: reminder pf a % b
**/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
