#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - sart
 *
 * @head: the node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
