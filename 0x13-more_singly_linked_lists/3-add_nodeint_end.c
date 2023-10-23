#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @n: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *curnt = *head;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	if (*head == NULL)
		*head = last;
	else
	{
		while (curnt->next != NULL)
			curnt = curnt->next;
		curnt->next = last;
	}
	return (last);
}
