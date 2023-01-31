#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Node at the beginning of a listint_t list
 *
 * @head: address to first node
 * @n: integer to be inserted 
 *
 * Return: Address node or NULL if fail
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold;

	hold = malloc(sizeof(listint_t));
	if (hold == NULL)
		return (NULL);

	hold->n = n;
	hold->next = *head;
	*head = hold;
	return (*head);
}
