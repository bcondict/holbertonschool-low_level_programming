#include "hash_tables.h"

/**
* hash_table_delete - dalete a hash table
* @ht: existent hash table
*
* Return: Always nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current = NULL, *tmp = NULL;

	if (!ht || !ht->array || !ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
