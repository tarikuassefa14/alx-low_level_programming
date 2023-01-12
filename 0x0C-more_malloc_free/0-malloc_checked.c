#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - using malloc to allocated memory
 *
 * @b: size of  to allocated memory 
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
