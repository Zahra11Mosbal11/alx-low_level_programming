#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - start
 *
 * @head: the node
 *
 * Return: e number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *node = head;

	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
		if (node <= node->next)
			exit(98);
		node = node->next;
	}
	return (i);
}
