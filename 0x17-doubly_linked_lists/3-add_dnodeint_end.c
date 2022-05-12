#include "lists.h"

/**
* add_dnodeint_end - add a new node at the end of the list
* @head: pointer to Head node
* @n: value to add to the linked list
*
* Return: addres of new element or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	tmp = *head;

	if (!tmp)
		*head = new_node;

	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
