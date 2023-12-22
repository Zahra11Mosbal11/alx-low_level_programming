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
	int printed = 0;

	if (!ht)
		return;

	printf("{");
	for (id = 0; id < ht->size; ++id)
	{
		node = ht->array[id];
		while (node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
