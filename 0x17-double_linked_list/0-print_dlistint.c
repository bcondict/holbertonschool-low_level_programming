#include "lists.h"

/**
* print_dlistint - print all the elements of a list
* @h: pointer to header
*
* Return: number of nodes
*/
 
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL && *h == NULL)
		return(NULL);
	for (i = 0, h, i++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return(i);
}
