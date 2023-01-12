#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block by using malloc
 *
 * @old_size: allocated size of the old ptr
 * @new_size: new size of the new ptr
 * @ptr: pointer allocated by malloc
 *
 * Return: new allocated address memory block.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, n;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;

	for (i = 0; i < n; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	ptr = new_ptr;
	return (ptr);
}
