#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all lements on linked list
 *
 * @h: pointer to list to print
 *
 * Return: the number of the nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int ind = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		ind += 1;
		h = h->next;
	}
	return (ind);
}
