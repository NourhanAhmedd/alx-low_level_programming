#include "lists.h"
/**
 * reverse_listint - Write a function that reverses a listint_t linked list.
 * @head: The address.
 * Return: It will return (*head).
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n_n;
	listint_t *next;

	n_n = NULL;
	next = NULL;
	/* If condition: */
	if (!head || !*head)
	{
		return (NULL);
	}

	n_n = *head;
	*head = NULL;
	/* While loop: */
	while (n_n)
	{
		next = n_n->next;
		n_n->next = *head;
		*head = n_n;
		n_n = next;
	}

	return (*head);
}
