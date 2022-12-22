#include "main.h"

/**
* reverse_array - function that flips the contents of an integer array
*
* @a: Array
*
* @n: Number of array
*
* Return: Null
*/

void reverse_array(int *a, int n)
{
	int arr, x;

	for (x = n - 1; x >= n / 2; x--)
	{
		arr = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = arr;
	}
}
