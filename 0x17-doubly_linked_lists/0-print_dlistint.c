#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistintt list
 *
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	while (h != NULL && h->prev != NULL)
		h = h->prev;

	for (len = 0; h; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
