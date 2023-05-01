#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: The pointer.
 * Return: It will return (d).
 */
int pop_listint(listint_t **head)
{
	int d;
	listint_t *n_n;

	/* If condition: */
	if (!head || !*head)
	{
		return (0);
	}

	n_n = (*head)->next;
	d = (*head)->d;
	free(*head);
	*head = n_n;

	return (d);
}
