#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - node at theend of a listint_t list.
 *
 * @head: nofe head
 * @n: input nodes number
 *
 * Return: the new element of address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *updated_node = malloc(sizeof(listint_t));
	listint_t *previous_node;

	if (head == NULL || updated_node == NULL)
	{
		return (NULL);
	}

	updated_node->n = n;
	updated_node->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = updated_node;
	}
	else
	{
		previous_node = (*head);
		while (previous_node->next != NULL)
		{
			previous_node = previous_node->next;
		}
		previous_node->next = updated_node;
	}
	return (updated_node);
}
