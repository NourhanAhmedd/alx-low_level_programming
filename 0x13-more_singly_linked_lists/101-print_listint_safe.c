#include "lists.h"
/* The libraries: */
#include <stdio.h>
#include <stdlib.h>
/**
 * reallocate - Write a function that reallocates a memory for an array.
 * @o_linked_list: The old list.
 * @s: size of the new list (always one more than the old list)
 * @add: new node to add to the list
 * Return: It will return (n_linked_list).
 */
const listint_t **reallocate(const listint_t **o_linked_list,
		size_t s, const listint_t *add)
{
	size_t index;
	const listint_t **n_linked_list;

	n_linked_list = malloc(s * sizeof(listint_t *));
	/* If condition: */
	if (n_linked_list == NULL)
	{
		free(o_linked_list);
		exit(98);
	}

	/* For loop: */
	for (index = 0; index < s - 1; index++)
	{
		n_linked_list[index] = o_linked_list[index];
	}

	n_linked_list[index] = add;
	free(o_linked_list);

	return (n_linked_list);
}

/**
 * print_listint_safe - Write a function that prints a listint_t linked list.
 * @head: The pointer.
 * Return: It will return (number).
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number;
	size_t index;
	const listint_t **linked_list;

	number = 0;
	linked_list = NULL;
	/* While loop: */
	while (head != NULL)
	{
		/* For loop: */
		for (index = 0; index < number; index++)
		{
			/* If condition: */
			if (head == linked_list[index])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(linked_list);
				return (number);
			}
		}

		number++;
		linked_list = reallocate(linked_list, number, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(linked_list);
	return (number);
}
