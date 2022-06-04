#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the array
*
* Return: new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size <= 0)
		return (NULL);
	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	memset(new_table->array, 0, sizeof(hash_table_t) * size);

	return (new_table);
}
