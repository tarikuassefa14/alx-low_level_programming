#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for array
 *
 * @nmemb: The elements of number
 * @size: The elements arrye size in bytes
 *
 * Return: pointer to tthe allocated meory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
