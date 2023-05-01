#include "lists.h"
/**
 * listint_len - Write a function that returns the number of elements
 * in a linked listint_t list.
 * @h: The pointer.
 * Return: It will return (index).
 */
size_t listint_len(const listint_t *h)
{
	size_t index;

	index = 0;
	/* While loop: */
	while (h)
	{
		h = h->next;
		index++;
	}

	return (index);
}
