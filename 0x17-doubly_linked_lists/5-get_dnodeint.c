#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a linked list
* @head: pointer of head node
* @index: index to search into the linked list
*
* Return: nth node of linked list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
