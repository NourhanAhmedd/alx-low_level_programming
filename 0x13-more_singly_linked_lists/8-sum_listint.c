#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: The pointer.
 * Return: It will return (result).
 */
int sum_listint(listint_t *head)
{
	int result;

	result = 0;
	/* While loop: */
	while (head)
	{
		result = result + head->n;
		head = head->next;
	}

	return (result);
}
