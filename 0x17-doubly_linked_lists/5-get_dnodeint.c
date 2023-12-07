#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: the node
 * @index: the indix
 * Return: if the node does not exist, return NULL or the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curnt = head;
	unsigned int n = 0;

	while (curnt)
	{
		if (n == index)
			return (curnt);
		curnt = curnt->next;
		n++;
	}
	return (NULL);
}
