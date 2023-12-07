#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the node
 * @idx: the index
 * @n: the data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *curnt = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	while (curnt && i < idx)
	{
		if (i == idx - 1)
		{
			node->prev = curnt;
			node->next = curnt->next;
			if (curnt->next)
				curnt->next->prev = node;
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
