#include "lists.h"
/**
 * print_listint - Write a function that prints all the elements
 * of a listint_t list.
 * @h: The pointer.
 * Return: It will return (index).
 */
size_t print_listint(const listint_t *h)
{
	size_t index;

	index = 0;
	/* While loop: */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}

	return (index);
}
