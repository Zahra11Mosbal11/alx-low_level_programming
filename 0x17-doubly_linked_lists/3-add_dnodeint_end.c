#include "lists.h"
/**
 * add_dnodeint_end - new node at the end
 * @head: the node
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *curnt = *head;

	last = malloc(sizeof(dlistint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->prev = NULL;
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		while (curnt->next != NULL)
			curnt = curnt->next;
		last->prev = curnt;
		curnt->next = last;
	}
	return (last);
}
