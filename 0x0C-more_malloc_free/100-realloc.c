#include "main.h"

/**
 * *_realloc - Write a function that reallocates a memory block
 * using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size).
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The new size in bytes of the new memory block.
 *
 * Return: If new_size == old_size do not do anything and return ptr,
 * If ptr is NULL then the call is equivalent to malloc(new_size),
 * If new_size is equal to zero and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int index;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
		{
			return (NULL);
		}
		return (pointer);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
		{
			return (NULL);
		}
		for (index = 0; index < old_size && index < new_size; index++)
		{
			*((char *)pointer + index) = *((char *)ptr + index);
		}
		free(ptr);
	}
	return (pointer);
}
