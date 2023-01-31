#include "lists.h"

/**
 * listint_len - Number of elements in a linked listint_t list
 *
 * @h: The list of the pointer
 *
 * Return: length of ponter
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
