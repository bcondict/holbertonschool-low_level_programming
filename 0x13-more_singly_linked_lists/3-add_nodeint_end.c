#include "lists.h"
/**
 * add_nodeint_end - add a node of integer at end of linked list
 * @head: head of node
 * @n: integer to add
 * Return: pointer to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end, *copy;

	if (head == NULL)
		return (NULL);

	new_node_end = (listint_t *)malloc(sizeof(listint_t));
	if (new_node_end == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	copy = *head;

	if (copy == NULL)
		*head = new_node_end;
	else
	{
		while (copy->next)
			copy = copy->next;
		tmp->next = new;
	}
	return (*head);
}
