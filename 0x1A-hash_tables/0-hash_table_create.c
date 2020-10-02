#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size hash table
 * Return: Pointer to created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->array = calloc(size, sizeof(hash_node_t *));
	if (!hash)
	{
		free(hash);
		return (NULL);
	}
	hash->size = size;
	return (hash);
}
