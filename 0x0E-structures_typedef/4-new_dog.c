#include <stdlib.h>
#include "dog.h"
/**
 * length - Function that prints the length of the string.
 * @s: The string.
 * Return: It will return (L).
*/
int length(const char *s)
{
	int L;

	L = 0;
	while (*s++)
	{
		L++;
	}
	return (L);
}

/**
 * copy_string - Function that takes a copy from (s) to (d).
 * @d: The destination.
 * @s: The source.
 * Return: It will return (d).
*/
char *copy_string(char *d, char *s)
{
	int index;

	/* for loop: */
	for (index = 0; s[index]; index++)
	{
		d[index] = s[index];
	}
	d[index] = '\0';
	return (d);
}

/**
 * new_dog - Write a function that creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: It will return (ptr).
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (length(name) + 1));
	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (length(owner) + 1));
	if ((*ptr).owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->name = copy_string(ptr->name, name);
	ptr->age = age;
	ptr->owner = copy_string(ptr->owner, owner);
	return (ptr);
}
