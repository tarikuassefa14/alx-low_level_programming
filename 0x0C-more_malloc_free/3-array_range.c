#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 *
 * @min: The value of array
 * @max: The last last array
 *
 * Return: pointer to newly created array
 **/

int *array_range(int min, int max)
{
	int i, total_elements, nb;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	total_elements = max - min + 1;
	array = malloc(sizeof(int) * total_elements);
	if (array == NULL)
	{
		return (NULL);
	}
	nb = min;
	for (i = 0; i < total_elements; i++)
	{
		array[i] = nb;
		nb++;
	}
	return (array);
}
