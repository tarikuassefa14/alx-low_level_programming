#include <stdio.h>

/**
 * array_iterator - executes function of each given elements
 *
 * @array: the given array
 * @size: the size of the array
 * @action: pointer to function
 *
 * Return: NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action != NULL && array != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
