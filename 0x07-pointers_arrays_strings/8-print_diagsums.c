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

	unsigned int sm1, sm2;

	sm1 = 0;
	sm2 = 0;

	for (x = 0; x < size; x++)
	{
		sm1 += a[(size * x) + i];
		sm2 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sm1, sm2);
}
