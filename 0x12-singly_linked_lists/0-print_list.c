#include "lists.h"
#include <stdlib.h>
/**
  * print_list - function that prints the elements of a list
  * @h: pointer to constat list_t
  * Return: size_t
  */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *walker = h;

	if (walker == NULL)
		return (0);
	while (walker != NULL)
	{
		printf("[%d] %s\n", walker->len, walker->str : "(nil)");
		walker = walker->next;
		counter++;
	}
	return (counter);
}
