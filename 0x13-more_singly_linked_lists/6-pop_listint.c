#include "lists.h"
/**
 * pop_listint - delete head node and return his data
 * @head: pointer of head's node
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *next_value = NULL;
	int copy = 0;

	if (*head == NULL || head == NULL)
		return (0);

	copy = (*head)->n;
	next_value = (*head)->next;
	free(*head);
	*head = next_value;

	return (copy);
}
