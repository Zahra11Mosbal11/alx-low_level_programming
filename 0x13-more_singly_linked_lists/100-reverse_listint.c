#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - start
 *
 * @head: the node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}
	*head = old;

	return (*head);
}
