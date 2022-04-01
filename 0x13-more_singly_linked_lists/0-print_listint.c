#include "lists.h"
/**
 * print_listint - print elements of a list
 * @h: current node 
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	if (h == NULL)
		return (0);
	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}
