#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: existent hash table
* @key: key to generate an index
*
* Return: the key on success or NULL if it failed
*/

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i = 0;
    hash_node_t *current = NULL;
    int count_node = 0;

    if (!ht)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
            if (count_node > 0)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            count_node++;
            current = current->next;
        }
    }
    printf("}\n");
}