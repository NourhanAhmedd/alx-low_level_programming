#include "lists.h"
/* The library: */
#include <stdlib.h>
/**
 * find_listint_loop - Write a function that finds the loop in a linked list.
 * @head: The pointer.
 * Return: It will return (the_e->next) or (NULL).
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pointer;
	listint_t *the_e;

	/* If condition: */
	if (head == NULL)
	{
		return (NULL);
	}

	/* For loop: */
	for (the_e = head->next; the_e != NULL; the_e = the_e->next)
	{
		/* If condition: */
		if (the_e == the_e->next)
		{
			return (the_e);
		}

		/* For loop: */
		for (pointer = head; pointer != the_e; pointer = pointer->next)
		{
			/* If condition: */
			if (pointer == the_e->next)
			{
				return (the_e->next);
			}
		}
	}

	return (NULL);
}
