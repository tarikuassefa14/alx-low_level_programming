#include "main.h"
#include <stdlib.h>

/**
 *create_array - eturns a pointer to a newly allocated space in memory
 *@size: number of element of an array
 *@c: char.
 *Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
