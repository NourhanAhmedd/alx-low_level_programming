#include "lists.h"
/**
 * free_list - Write a function that frees a list_t list.
 *
 * @head: The head node (address).
 */
void free_list(list_t *head)
{
	list_t *the_nxt_node;
	list_t *the_node;

	/*  if condition: */
	if (!head)
	{
		return;
	}

	the_node = head;
	/*  while loop: */
	while (the_node)
	{
		the_nxt_node = the_node->next;
		free(the_node->str);
		free(the_node);
		the_node = the_nxt_node;
	}
}
