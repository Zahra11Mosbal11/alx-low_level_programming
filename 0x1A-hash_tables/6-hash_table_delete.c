#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: is the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int id;

	if (!ht)
		return;
	for (id = 0; id < ht->size; ++id)
	{
		node = ht->array[id];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
