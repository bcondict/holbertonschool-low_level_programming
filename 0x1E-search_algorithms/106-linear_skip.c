#include "search_algos.h"

/**
 * linear_skip
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * 
 * Return: pointer on the first node where value is located
 *			NULL if list or head are NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *x = list->express;
    int i = 0;
    for (i = list->level; i >= 1; i--)
	{
        while (x->next[i]->n < value)
            x = x->next[i];
    }
    if (x->forward[1]->key == value)
	{
        return x->forward[1];
    }
    return NULL;
}
