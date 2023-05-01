#include "lists.h"
/**
 * free_listint - fWrite a function that frees a listint_t list.
 * @head: The pointer.
 */
void free_listint(listint_t *head)
{
	listint_t *n_n;

	/* While loop: */
	while (head)
	{
		n_n = head;
		head = head->next;
		free(n_n);
	}
}
