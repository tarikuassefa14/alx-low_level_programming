#include <stdio.h>
#include "dog.h"

/**
 * init_dog - It is the initialize dog Structure
 * @d: The doge structure
 * @name: The name of dog
 * @age: The age of dog
 * @owner: name of owner of the doge
 * Return: Null
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;

	}
}
