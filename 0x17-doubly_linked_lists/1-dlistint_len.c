#include "lists.h"

/**
* dlistint_len - return the number of elements of a linked list
* @h: pointer of head node
*
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
