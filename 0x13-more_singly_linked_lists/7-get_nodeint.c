#include "lists.h"
/**
 * get_nodeint_at_index - get the node of a linked list
 * @head: current node
 * @index: index of node
 * Return: node of index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	return (get_nodeint_at_index(head->next, index - 1));
}
