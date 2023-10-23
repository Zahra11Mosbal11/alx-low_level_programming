#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - start
 * @head: the node
 * Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
