#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new node at a given position
* @h: pointer to head node
* @idx: index of the list where the new node should be added
* @n: value to be added
*
* Return: addres of the new Node or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *tmp = *h, *new_node;

	for (i = 1; i < idx && h; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = tmp;
	}
	if (tmp->next == NULL)
	{
		tmp->next = new_node;
		new_node->prev = tmp;
		return (new_node);
	}

	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
