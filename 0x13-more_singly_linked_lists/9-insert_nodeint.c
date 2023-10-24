#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - start
 *
 * @head: the node
 * @idx: the indx
 * @n: the data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *curnt = *head;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	while (curnt && i < idx)
	{
		if (i == idx - 1)
		{
			node->next = curnt->next;
			curnt->next = node;
			return (node);
		}
		else
		{
			curnt = curnt->next;
			i++;
		}
	}
	return (NULL);
}
