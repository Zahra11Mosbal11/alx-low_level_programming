#include "lists.h"
/**
 * print_listint - start
 * @h: the list will be printed
 *
 * Return: tha number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
