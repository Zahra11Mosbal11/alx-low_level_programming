#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *curnt;
	unsigned long int id;

	if (!ht || !key || !value)
		return (0);
	
	id = key_index((unsigned char *)key, ht->size);
	curnt = ht->array[id];
	while (curnt)
	{
		if (strcmp(curnt->key, key) == 0)
		{
			free(curnt->value);
			curnt->value = strdup(value);
			if (!curnt->value)
				return (0);
			return (1);
		}

		curnt = curnt->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}

	new->next = ht->array[id];
	ht->array[id] = new->next;
	return (1);
}
