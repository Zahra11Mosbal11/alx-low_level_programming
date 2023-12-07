#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: the node
 * Return: returns the sum of all the data (n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curnt = head;
	int sum = 0;

	if (!head)
		return (sum);
	while (curnt)
	{
		sum += curnt->n;
		curnt = curnt->next;
	}
	return (sum);
}
