#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list_t
 *
 * @head: the first node of address
 * @str: Address insert into the new node
 *
 * Return: the new node address
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *h2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	h->str = strdup(str);
	if (h->str == NULL)
	{
		free(h);
		return (NULL);
	}
	while (str[length])
		length++;
	h->len = length;
	h->next = NULL;

	if (*head == NULL)
	{
		*head = h;
		return (h);
	}

	h2 = *head;
	while (h2->next)
		h2 = h2->next;
	h2->next = h;
	return (h);
}
