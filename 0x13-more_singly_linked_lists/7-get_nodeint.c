#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list.
 * @head: the head node
 * @index: the index of node
 *
 * Return:If the node at the given index exists, return a pointer to that node.
 * If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;


	while (head != NULL && i < index)
	{
		node = node->next;
		i++;
	}
	if (i == index)
		return (node);
	else
		return (NULL);
}
