#include "lists.h"
/**
 * get_nodeint_at_index - Write a function that returns the nth node
 * of a listint_t linked list.
 * @head: The pointer.
 * @index: The index.
 * Return: It will return (n_n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;
	listint_t *n_n;

	/* For loop: */
	for (n_n = head, d = 0; n_n && d < index; n_n = n_n->next, d++)
		;

	return (n_n);
}
