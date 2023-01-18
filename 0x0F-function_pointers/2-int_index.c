#include <stdio.h>

/**
 * int_index - searchs for an integer
 *
 * @array: the array
 * @size: size element of in the array
 * @cmp: pointer to a function
 *
 * Return: if no element match, return -1;
 * or if size <=, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
