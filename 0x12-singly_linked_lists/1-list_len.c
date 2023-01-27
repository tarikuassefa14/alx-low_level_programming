#include "lists.h"

/**
 * list_len - find the number of elements.
 *
 * @h: list from the pointer
 *
 * Return: linked list_t list
 **/

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int cou = 0;

	tmp = h;
	while (tmp)
	{
		cou++;
		tmp = tmp->next;
	}
	return (cou);
}
