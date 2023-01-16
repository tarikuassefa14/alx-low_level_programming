#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print all dog  data
 *
 * @d: dog struct
 *
 * Return: Null
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name == NULL ? d->name : "(nil)");
		       ((d->age) ? d->age : 0);
		       ((d->owner) ? d->owner : "(nil)");
	}
}
