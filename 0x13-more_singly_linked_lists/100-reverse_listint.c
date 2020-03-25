#include "lists.h"
/**
  * reverse_listint - reverses a linked list
  * @head: pointer to a pointer
  * Return: head to NULL
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode;
	listint_t *nextNode;

	prevNode = NULL;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
