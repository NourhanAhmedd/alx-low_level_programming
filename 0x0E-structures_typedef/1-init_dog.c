#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog.
 * @d: Variable of type struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* It will check if (d) exists or not */
	if (d)
	{
		/* NAME: */
		d->name = name;
		/* AGE: */
		d->age = age;
		/* OWNER: */
		d->owner = owner;
	}
}
