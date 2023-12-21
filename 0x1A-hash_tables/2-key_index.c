#include "hash_tables.h"
/**
 * key_index -  function that gives you the index of a key.
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || !size)
		return (0);
	index = hash_djb2(((unsigned char *)key)) % size;
	return (index);
}
