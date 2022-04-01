#include "lists.h"
/**
 * listint_len - returns the number of elements in a liked list
 * @h: current node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n_elemnts = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		h = h->next;
		n_elemnts++;
	}
	return (n_elemnts);
}
