#include "lists.h"
/**
 * add_dnodeint - adds a new node to beginning of doubly linked list
 *
 * @head: pointer to head of list
 * @n: integer to insert
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (head != NULL)
	{
		new_node->next = *head;
		new_node->n = n;
		new_node->prev = NULL;
		if (*head)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
	}
	return (new_node);
}
