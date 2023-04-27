#include "lists.h"
/**
 * add_node_end - Write a function that adds a new node
 * at the end of a list_t list.
 *
 * @head: The head node (address).
 * @str: The string.
 *
 * Return: It will return (add_new_node).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new_node = malloc(sizeof(list_t));
	list_t *the_node = *head;

	if (!head || !add_new_node)
	{
		return (NULL);
	}

	if (str)
	{
		add_new_node->str = strdup(str);
		if (!add_new_node->str)
		{
			free(add_new_node);
			return (NULL);
		}
		add_new_node->len = s_len(add_new_node->str);
	}

	if (the_node)
	{
		while (the_node->next)
		{
			the_node = the_node->next;
		}

		the_node->next = add_new_node;
	}
	else
	{
		*head = add_new_node;
	}
	return (add_new_node);
}
