#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n members of an integer array
 *
 * @a: Array
 *
 * @n: Number of elements
 *
 * Return: Null
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		if (r == 0)
			printf("%d", a[r]);
		else
			printf(", %d", a[r]);
	}
		printf("\n");
}
