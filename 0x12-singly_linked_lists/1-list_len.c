#include "lists.h"
/**
 * list_len - Write a function that returns the number of elements
 * in a linked list_t list.
 *
 * @h: The pointer.
 *
 * Return: It will return (index).
 */
size_t list_len(const list_t *h)
{
	size_t index;

	index = 0;
	/*  while loop: */
	while (h)
	{
		h = h->next;
		index++;
	}
	return (index);
}
