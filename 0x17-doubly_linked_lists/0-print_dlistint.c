#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: the node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t s = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		s++;
	}
	return (s);
}
