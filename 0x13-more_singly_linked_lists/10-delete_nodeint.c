#include "lists.h"
/**
 * delete_nodeint_at_index - Write a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: The address.
 * @index: The index of the node.
 * Return: It will return 1 (Success) or -1 (Error).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i1;
	listint_t *previous_n;
	listint_t *n_n;

	i1 = 0;
	/* If condition: */
	if (!head || !*head)
	{
		return (-1);
	}

	/* If condition: */
	if (!index)
	{
		n_n = *head;
		*head = (*head)->next;
		free(n_n);
		return (1);
	}

	n_n = *head;
	/* While loop: */
	while (n_n)
	{
		/* If condition: */
		if (i1 == index)
		{
			previous_n->next = n_n->next;
			free(n_n);
			return (1);
		}

		i1++;
		previous_n = n_n;
		n_n = n_n->next;
	}

	return (-1);
}
