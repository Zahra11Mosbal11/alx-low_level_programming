#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes
 * @head: the node
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head, *curnt = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		i++;
	}
	curnt = node->next;
	node->next = curnt->next;
	if (curnt->next)
		curnt->next->prev = node;

	free(curnt);
	return (1);
}
