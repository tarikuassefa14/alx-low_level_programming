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
	list_t *tmp, *tmp2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	while (str[length])
		length++;
	tmp->len = length;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	tmp2 = *head;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	return (tmp);
}
