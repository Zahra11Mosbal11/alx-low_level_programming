#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int id;

	if (!ht)
		return;

	printf("{");
	for (id = 0; id < ht->size; ++id)
	{
		node = ht->array[id];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
