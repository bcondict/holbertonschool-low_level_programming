#include "hash_tables.h"

/**
* key_index - gives a index of a key
* @key: key to generate a index
* @size: size of array of hash table
*
* Return: index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (!key || !*key || size == 0)
        return (0);
    return (hash_djb2(key) % size);
}