#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - The funcation of free dog
 *
 * @d: struct dog free
 *
 * Return: Null
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
