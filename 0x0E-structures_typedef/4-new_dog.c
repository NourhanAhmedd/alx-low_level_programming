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
char copy_string(char *d, char *s)
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
 * Return: It will return (dog).
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (length(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = copy_string(dog->name, name);
	dog->age = age;
	dog->owner = copy_string(dog->owner, owner);
	return (dog);
}
