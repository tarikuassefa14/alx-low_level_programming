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
	const list_t *h;
	unsigned int i = 0;


	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
