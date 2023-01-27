#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 *
 * @head: double pointer to head address
 * @str: new string to address
 *
 * Return: the address new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int len = 0;

	while (str[len])
		len++;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = len;
	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
