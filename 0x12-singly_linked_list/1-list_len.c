#include "lists.h"
/**
 * list_len - return the number of elements in a linked list
 * @h: pointer of list_t struct
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
