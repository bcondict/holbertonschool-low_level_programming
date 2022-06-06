#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: existent hash table
* @key: key to generate an index
*
* Return: 
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index = 0;

    if (!ht)
		return (NULL);
    
	index = key_index((unsigned char *)key, ht->size);
    if (ht->array[index])
    {
        current = ht->array[index];
        while (current && strcmp(current->key, key) != 0)
            current = current->next;
    }
    if (!current)
        return(NULL);

    return (current->value);
}