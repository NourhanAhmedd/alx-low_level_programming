#include "lists.h"
/**
 * add_nodeint_end - Write a function that adds a new node at the
 * end of a listint_t list.
 * @head: The pointer.
 * @n: The number.
 * Return: It will return (add_node).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *n_n;

	add_node = malloc(sizeof(listint_t));
	/* If condition: */
	if (!head || !add_node)
	{
		return (NULL);
	}

	add_node->next = NULL;
	add_node->n = n;

	/* If condition: */
	if (!*head)
	{
		*head = add_node;
	}
	else
	{
		n_n = *head;

		/* While loop: */
		while (n_n->next)
		{
			n_n = n_n->next;
		}
		n_n->next = add_node;
	}

	return (add_node);
}
