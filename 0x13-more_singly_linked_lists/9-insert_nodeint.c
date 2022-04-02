#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a given position
 * @head: current node
 * @index: position to inser
 * @n: number to insert
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_pointer = NULL;
	listint_t *idx_node = NULL;

	idx_node = *head;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_pointer = malloc(sizeof(listint_t));
	if (new_pointer == NULL)
		return (NULL);
	new_pointer->n = n;

	if (index == 0)
	{
		new_pointer->next = idx_node;
		*head = new_pointer;
		return (*head);
	}

	while (index > 1)
	{
		idx_node = idx_node->next;
		index--;
		if (idx_node == NULL)
		{
			free(new_pointer);
			return (NULL);
		}
	}
	new_pointer->next = idx_node->next;
	idx_node->next = new_pointer;
	return (new_pointer);
}
