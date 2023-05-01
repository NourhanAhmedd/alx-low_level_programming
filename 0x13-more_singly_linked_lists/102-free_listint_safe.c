#include "lists.h"
/* The library: */
#include <stdlib.h>
/**
 * find_the_loop - Write a function that finds a loop.
 * @linked_list: The pointer.
 * Return: It will return (the_e->next) or (NULL).
 */
listint_t *find_the_loop(listint_t *linked_list)
{
	listint_t *pointer;
	listint_t *the_e;

	/* If condition: */
	if (linked_list == NULL)
	{
		return (NULL);
	}

	/* For loop: */
	for (the_e = linked_list->next; the_e != NULL; the_e = the_e->next)
	{
		/* If condition: */
		if (the_e == the_e->next)
		{
			return (the_e);
		}

		/* For loop: */
		for (pointer = linked_list; pointer != the_e; pointer = pointer->next)
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

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: The pointer.
 * Return: It will return (length).
 */
size_t free_listint_safe(listint_t **h)
{
	int l_l_loop;
	size_t length;
	listint_t *nxt_n;
	listint_t *loop_n;

	l_l_loop = 1;
	/* If condition: */
	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	loop_n = find_the_loop(*h);
	/* For loop: */
	for (length = 0; (*h != loop_n || l_l_loop) && *h != NULL; *h = nxt_n)
	{
		length++;
		nxt_n = (*h)->next;
		/* If condition: */
		if (*h == loop_n && l_l_loop)
		{
			/* If condition: */
			if (loop_n == loop_n->next)
			{
				free(*h);
				break;
			}

			length++;
			nxt_n = nxt_n->next;
			free((*h)->next);
			l_l_loop = 0;
		}

		free(*h);
	}

	*h = NULL;
	return (length);
}
