#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table or NULL if not
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
