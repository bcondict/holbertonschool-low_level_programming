#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: pointer to head
 * Return: always 0 (succes)
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	free_listint(head->next);
	free(head);
}
