#include "lists.h"
/**
 * free_list - free the linked list
 * @head: pointer to star of linked list
 * Return: Always void
 */
void free_list(list_t *head)
{
	if (head->str)
		free(head->str);
	if (head->next)
		free_list(head->next);
	free(head);
}
