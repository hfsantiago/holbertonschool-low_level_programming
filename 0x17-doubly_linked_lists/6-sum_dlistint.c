#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in linked list
 *
 * @head: pointer to head of list
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int retval = 0;

	temp = head;
	while (temp != NULL)
	{
		retval += temp->n;
		temp = temp->next;
	}
	return (retval);
}
