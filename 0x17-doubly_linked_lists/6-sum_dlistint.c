#include "lists.h"

/**
* sum_dlistint - return the sum of all the data of a linked list
* @head: pointer to head node
*
* Return: the sum of the data
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
