#include "lists.h"

/**
 * _strlen - count the lenght of a string
 * @str: string to be count
 * Return: legut of the string
 */

int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
		count++;

	return (count);
}

/**
 * add_node_end - add a new node at the end
 * @head: pointer to star the string
 * @str: string to insert
 * Return: pointer head to last position
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	temp = *head;

	if (!temp)
		*head = new;
	else
	{
		for (; temp->next;)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
