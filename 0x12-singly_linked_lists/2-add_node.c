#include "lists.h"
/**
 * add_node - Write a function that adds a new node at the
 * beginning of a list_t list.
 *
 * @head: The head node (address).
 * @str: The string.
 *
 * Return: It will return (n_head_node).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head_node = malloc(sizeof(list_t));

	if (!head || !n_head_node)
	{
		return (NULL);
	}

	if (str)
	{
		n_head_node->str = strdup(str);
		if (!n_head_node->str)
		{
			free(n_head_node);
			return (NULL);
		}

		n_head_node->len = s_len(n_head_node->str);
	}

	n_head_node->next = *head;
	*head = n_head_node;
	return (n_head_node);
}
