#include "lists.h"
/**
 * add_nodeint - Write a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer.
 * @n: The number.
 * Return: It will return (add_node).
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	/* If condition: */
	if (!head || !add_node)
	{
		return (NULL);
	}

	add_node->next = NULL;
	add_node->n = n;

	/* If condition: */
	if (*head)
	{
		add_node->next = *head;
	}

	*head = add_node;
	return (add_node);
}
