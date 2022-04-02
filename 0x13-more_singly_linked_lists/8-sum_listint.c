#include "lists.h"
/**
 * sum_listint - sum all data given
 * @head: current node
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum_of_nodes = 0;
	listint_t *nodes_to_sum = head;

	if (head == 0)
		return (0);

	while (head)
	{
		sum_of_nodes += head->n;
		nodes_to_sum = head->next;
		head = nodes_to_sum;
	}

	return (sum_of_nodes);
}
