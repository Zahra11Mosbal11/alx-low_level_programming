#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - start
 *
 * @head: th head node
 *
 * Return: intiger
 */
int pop_listint(listint_t **head)
{
	int pop;
	listint_t *curnt = *head;

	if (*head == NULL)
		return (0);

	pop = (*head)->n;
	*head = (*head)->next;
	free(curnt);

	return (pop);
}
