#include "lists.h"
/**
 * @brief 
 * 
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
		return;
	free_listint2(*head->next);
	free(*head);
	*head = NULL;

}