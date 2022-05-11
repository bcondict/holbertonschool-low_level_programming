#include "lists.h"

/**
* free_dlistint - free a linked list
* @head: pointer of head node
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while(head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
