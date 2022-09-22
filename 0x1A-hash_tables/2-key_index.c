#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 * in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_idx;

	find_idx = hash_djb2(key);
	return (find_idx % size);
}
