#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
*
* Return: new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL, new_index = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_index = calloc(sizeof(hash_node_t *));
	if (new_index == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table = size;
	new_table->array = new_index;

	return (new_table);
}
