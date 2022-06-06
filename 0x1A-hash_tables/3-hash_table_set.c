#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: existent hash table
* @key: key to generate an index
* @value: value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_node_t *ht, const char *key, const char *value)
{
	hash_node_t *current = NULL;
	unsigned long int index = 0;

	if (!*ht || !key || !*key || !value)
		return (0);
	
	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];

	while(current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return(1);
		}
		current = current->next;
	}

	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (0);

	current->key = strdup(key);
	current->value = strdup(value);

	if (ht->array[index] != NULL)
		current->next = ht->array[index];
	
	ht->array[index] = current;

	return (1);
}