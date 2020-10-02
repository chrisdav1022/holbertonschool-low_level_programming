#include "hash_tables.h"
/**
 * key_index - Gives you the index of a key
 * @key: The key
 * @size: size array of the hash table
 * Return: the key/value stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
