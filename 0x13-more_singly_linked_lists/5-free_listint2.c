#include "lists.h"
/**
 * free_listint2 - free the linked list and set head to null
 * @head: head of nodes 
 * Return: Always 0 (success)
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
		return;
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
