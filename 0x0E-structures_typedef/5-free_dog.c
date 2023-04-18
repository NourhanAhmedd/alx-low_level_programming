#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Write a function that frees dogs.
 * @d: A variable of type struct dog.
*/
void free_dog(dog_t *d)
{
	/* It will check if (d) exists or not. */
	if (d)
	{
		/* Free (name): */
		if (d->name)
		{
			free(d->name);
		}

		/* Free (owner): */
		if (d->owner)
		{
			free(d->owner);
		}

		/* Free (d): */
		free(d);
	}
}
