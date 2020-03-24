#include "lists.h"
/**
  * print_listint - prints all the elements of listint_t
  * @h: takes in a const struct type *h
  * Return: returns the counter
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *w = h;

	if (w == NULL)
		return (0);
	while (w != NULL)
	{
		printf("%d\n", w->n);
		w = w->next;
		c++;
	}
	return (c);
}
