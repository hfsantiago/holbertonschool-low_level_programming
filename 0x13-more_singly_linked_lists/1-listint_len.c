#include "lists.h"
/**
  * listint_len - returns the number of elements in a linked listint_t list
  * @h: pointer to head, the begenning of the list
  * Return: number of elements in list.
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t i = 0;

	for (c = h; c != NULL; c = c->next)
		i++;
	return (i);
}
