#include "lists.h"
/**
 * s_len - Function that returns the length.
 *
 * @str: The string.
 *
 * Return: It will return (index).
 */
int s_len(char *str)
{
	int index;

	index= 0;
	/*  if condition: */
	if (!str)
	{
		return (0);
	}

	/* while loop: */
	while (*str++)
	{
		index++;
	}
	return (index);
}

/**
 * print_list - Write a function that prints all the elements of a list_t list.
 *
 * @h: The pointer.
 *
 * Return: It will return (index).
 */
size_t print_list(const list_t *h)
{
	size_t index;

	index = 0;
	/*  while loop: */
	while (h)
	{
		printf("[%d] %s\n", s_len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		index++;
	}
	return (index);
}
