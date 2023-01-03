#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 *
 * @size: Size
 *
 * @a: Matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size * x) + x)]; 
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
