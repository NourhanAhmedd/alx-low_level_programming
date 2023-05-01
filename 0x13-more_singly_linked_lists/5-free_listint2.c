#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: The pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *temporary;
	listint_t *n_n;

	/* If condition: */
	if (!head)
	{
		return;
	}

	n_n = *head;
	/* While loop: */
	while (n_n)
	{
		temporary = n_n;
		n_n = n_n->next;
		free(temporary);
	}

	*head = NULL;
}
