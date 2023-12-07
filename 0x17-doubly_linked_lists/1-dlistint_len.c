#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the node
 * Return: the number of elemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t s = 0;

	while (node != NULL)
	{
		node = node->next;
		s++;
	}
	return (s);
}
