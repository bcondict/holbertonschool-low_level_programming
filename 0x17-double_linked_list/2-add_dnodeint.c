#include "lists.h"

/**
* add_dnodeint - add a new node at the beginning of list
* @head: pointer of head node
* @n: value to insert
*
* Return: the addres of the new element or new if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->next = *head;

	

	return(new_node);
}
