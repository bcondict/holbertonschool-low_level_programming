#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: string
 * Return: the addres of new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;

	*head = new;

	return (*head);
}
