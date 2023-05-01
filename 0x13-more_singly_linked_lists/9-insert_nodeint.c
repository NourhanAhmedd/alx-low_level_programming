#include "lists.h"
/**
 * insert_nodeint_at_index - Write a function that inserts a new
 * node at a given position.
 * @head: The address.
 * @idx: The index of the list.
 * @n: The number.
 * Return: It will return (add_node) or (NULL).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *add_node;
	listint_t *n_n;

	index = 0;
	add_node = malloc(sizeof(listint_t));
	/* If condition: */
	if (!head || !add_node)
	{
		return (NULL);
	}

	add_node->n = n;
	add_node->next = NULL;
	/* If condition: */
	if (!idx)
	{
		add_node->next = *head;
		*head = add_node;
		return (add_node);
	}

	n_n = *head;
	/* While loop: */
	while (n_n)
	{
		/* If condition: */
		if (index == idx - 1)
		{
			add_node->next = n_n->next;
			n_n->next = add_node;
			return (add_node);
		}

		index++;
		n_n = n_n->next;
	}

	free(add_node);
	return (NULL);
}
