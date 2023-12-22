#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, or NULL if not.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int id;
	hash_node_t *curnt;

	if (!ht || !key)
		return (NULL);

	id = key_index((unsigned char *)key, ht->size);
	curnt = ht->array[id];
	while (curnt)
	{
		if (strcmp(curnt->key, key) == 0)
			return (curnt->value);
		curnt = curnt->next;
	}
	return (NULL);
}
